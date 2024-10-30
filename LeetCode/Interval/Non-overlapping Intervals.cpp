#include<bits/stdc++.h>
using namespace std;
//Non-overlapping intervals

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int k=1,n=intervals.size(),count=0,i=0;
        while(i<n-1){
            k=i+1;
            while(k<n&&intervals[i][1]>intervals[k][0]){
                count++;
                intervals[i][1]=min(intervals[i][1],intervals[k][1]);
                k++;
            }
            i=k;
        }
        return count;
    }
};
int main(){
    Solution s; 
    vector<vector<int>> inter={{1,2},{2,3},{3,4},{1,3}};
    cout<<s.eraseOverlapIntervals(inter);
}   