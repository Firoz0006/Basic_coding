#include<bits/stdc++.h>
using namespace std;
//merge intervals

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>>ans;
        sort(begin(inter),end(inter));
        int a=inter[0][0],b=inter[0][1];
        for(auto v: inter)
        {
            if(v[0]>b){
                ans.push_back({a,b});
                a=v[0];b=v[1];
            }
            else if(v[1]>b) b=v[1];
        }
        ans.push_back({a,b});
        return ans;

        
    }
};