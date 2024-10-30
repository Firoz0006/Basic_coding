#include<bits/stdc++.h>
using namespace std;
//Meeting rooms Leetcode Premium
class solution {
    public:
bool canAttendMeetings(vector<vector<int>>& intervals)
 {
    // Sort intervals by start time
    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });

    // Check for overlaps
    for (int i = 1; i < intervals.size(); ++i) {
        // If there is an overlap
        if (intervals[i][0] < intervals[i - 1][1]) {
            return false;
        }
    }

        return true;
    }
};
int main()
{
    vector<vector<int>> intervals={{0,30},{5,10},{15,20}};
    solution s;
    cout<<s.canAttendMeetings(intervals);
    return 0;
}

