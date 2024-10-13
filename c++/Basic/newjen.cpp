#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

// Memoization table
unordered_map<string, pair<int, vector<string>>> memo;

// Function to create a memoization key
string createKey(int month, const string& current_office, int relocations_left, int moves_this_quarter) {
    return to_string(month) + "_" + current_office + "_" + to_string(relocations_left) + "_" + to_string(moves_this_quarter);
}

// Recursive function with memoization to maximize holidays
pair<int, vector<string>> dfs(int month, const string& current_office, int relocations_left, int moves_this_quarter,
                            const unordered_map<string, vector<string>> &office_connections,
                            const unordered_map<string, vector<int>> &holidays, int max_relocations, int max_moves_per_quarter) {
    
    if (month == 12) { // Base case: all months processed
        return {0, {}};
    }
    
    // Create the memoization key
    string key = createKey(month, current_office, relocations_left, moves_this_quarter);
    
    // If result is already computed, return it
    if (memo.find(key) != memo.end()) {
        return memo[key];
    }

    // Get holidays for the current month
    int current_holidays = holidays.at(current_office).at(month);
    
    // Option 1: Stay in the current office
    pair<int, vector<string>> stay = dfs(month + 1, current_office, relocations_left, 
                                         ( (month +1 ) % 3 == 0 ? 0 : moves_this_quarter ), // Reset moves at end of quarter
                                        office_connections, holidays, max_relocations, max_moves_per_quarter);
    stay.first += current_holidays; // Add current month holidays

    pair<int, vector<string>> best = stay; // Set as the best option for now
    best.second.insert(best.second.begin(), current_office); // Add current office to the path

    // Option 2: Try relocating if possible
    if (relocations_left > 0 && moves_this_quarter < max_moves_per_quarter) {
        for (const string& neighbor : office_connections.at(current_office)) {
            pair<int, vector<string>> move = dfs(month + 1, neighbor, relocations_left - 1,
                                                 ( (month +1 ) % 3 == 0 ? 0 : moves_this_quarter + 1 ), // Increment move in current quarter
                                                office_connections, holidays, max_relocations, max_moves_per_quarter);
            
            move.first += current_holidays; // Add current month holidays for the current office
    
            // Choose the option that maximizes holidays
            if (move.first > best.first) {
                best = move;
                best.second.insert(best.second.begin(), current_office); // Add current office to the path
            }
        }
    }

    // Memoize the result
    memo[key] = best;
    return best;
}

// Function to find the best sequence of moves and the total holidays
pair<vector<string>, int> maxHolidays(const unordered_map<string, vector<string>> &office_connections, 
                                    const unordered_map<string, vector<int>> &holidays, int max_relocations = 8, int max_moves_per_quarter = 2) {
    int max_total_holidays = -1;
    vector<string> best_sequence;

    // Try starting from any office
    for (const auto &office_pair : holidays) {
        string starting_office = office_pair.first;
        pair<int, vector<string>> result = dfs(0, starting_office, max_relocations, 0, office_connections, holidays, max_relocations, max_moves_per_quarter);
        int total = result.first;
        if (total > max_total_holidays) {
            max_total_holidays = total;
            best_sequence = result.second;
        }
    }

    return {best_sequence, max_total_holidays};
}

int main() {
    // Input: Offices within 100km range
    unordered_map<string, vector<string>> office_connections = {
        {"Noida", {"Delhi", "Gurugram", "Faridabad"}},
        {"Delhi", {"Noida", "Gurugram", "Sonipat", "Faridabad"}},
        {"Sonipat", {"Delhi", "Panipat", "Gurugram"}},
        {"Gurugram", {"Noida", "Delhi", "Sonipat", "Panipat", "Faridabad"}},
        {"Panipat", {"Sonipat", "Gurugram"}},
        {"Faridabad", {"Delhi", "Noida", "Gurugram"}}
    };

    // Input: Month-wise holidays for each office
    unordered_map<string, vector<int>> holidays = {
        {"Noida", {1, 3, 4, 2, 1, 5, 6, 5, 1, 7, 2, 1}},
        {"Delhi", {5, 1, 8, 2, 1, 7, 2, 6, 2, 8, 2, 6}},
        {"Sonipat", {2, 5, 8, 2, 1, 6, 9, 3, 2, 1, 5, 7}},
        {"Gurugram", {6, 4, 1, 6, 3, 4, 7, 3, 2, 5, 7, 8}},
        {"Panipat", {2, 4, 3, 1, 7, 2, 6, 8, 2, 1, 4, 6}},
        {"Faridabad", {2, 4, 6, 7, 2, 1, 3, 6, 3, 1, 6, 8}}
    };

    // Call function to find the best sequence and the total holidays
    pair<vector<string>, int> result = maxHolidays(office_connections, holidays);

    // Output the result
    cout << "Optimal Office Sequence by Month:" << endl;
    vector<string> months = {"January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December"};
    for (size_t i = 0; i < months.size(); ++i) {
        if (i < result.first.size())
            cout << months[i] << ": " << result.first[i] << endl;
        else
            cout << months[i] << ": " << "N/A" << endl; // In case of incomplete path
    }
    cout << "\nTotal Holidays Enjoyed: " << result.second << endl;

    return 0;
}
