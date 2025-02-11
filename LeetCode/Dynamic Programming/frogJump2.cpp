#include<bits/stdc++.h>
using namespace std;
//Frog Jump II
//https://leetcode.com/problems/frog-jump-ii/description/
class Solution {
public:
    int maxJump(vector<int>& stones) {
        int n=stones.size();
        //one unit jumps as stones.size()>=2
        int ans=max(stones[1]-stones[0],stones[n-1]-stones[n-2]);
        for(int i=0;i<n;i++) {
            if(i-2>=0) {
                ans=max(ans,stones[i]-stones[i-2]);
            }
        }
        return ans;
    }
};
int main() {
    Solution obj;
    vector<int> stones = {0,1,3,5,6,8,12,17};
    cout << obj.maxJump(stones);
    return 0;
}