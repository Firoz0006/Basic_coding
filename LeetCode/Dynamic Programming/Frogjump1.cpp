#include<bits/stdc++.h>
using namespace std;

//Frog Jump
//https://leetcode.com/problems/frog-jump/description/

class Solution {
public:
    bool canCross(vector<int>& stones) {
        std::unordered_map<int, std::unordered_set<int>> dp;
        for (int stone : stones) {
            dp[stone] = std::unordered_set<int>();
        }
        dp[0].insert(0);

        for (int stone : stones) {
            for (int jump : dp[stone]) {
                for (int jumpDistance : {jump - 1, jump, jump + 1}) {
                    if (jumpDistance > 0 && dp.find(stone + jumpDistance) != dp.end()) {
                        dp[stone + jumpDistance].insert(jumpDistance);
                    }
                }
            }
        }

        return !dp[stones.back()].empty();        
    }
};
int main() {
    Solution obj;
    vector<int> stones = {0,1,3,5,6,8,12,17};
    cout << obj.canCross(stones);
    return 0;
}