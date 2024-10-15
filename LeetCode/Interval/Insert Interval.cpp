#include<bits/stdc++.h>
using namespace std;
//insert interval
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inter, vector<int>& newInter) {
        vector<vector<int>>ans;
        int a1=newInter[0],b1=newInter[1];
        
        for(int i=0;i<inter.size();++i){
            int a2=inter[i][0],b2=inter[i][1];

            if(a2>b1){
                ans.push_back({a1,b1});
                a1=a2;
                b1=b2;
            }else if(a1>b2){
                ans.push_back({a2,b2});
            }else{
                int a=min(a1,a2),b=max(b1,b2);
                a1=a,b1=b;
            }
        }
        ans.push_back({a1,b1});
        return ans;

        
    }
};