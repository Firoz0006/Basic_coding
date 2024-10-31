#include<bits/stdc++.h>
using namespace std;
//top k frequent elements
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        priority_queue<int> pq;
        for(int i:nums){
            map[i]+=1;
        }
        for(auto m:map){
            pq.push(m.second);
        }
        vector<int> topkf;
        for(int i=0;i<k;i++){
            for(auto m:map){
                if(pq.top()==m.second){
                    topkf.push_back(m.first);
                    pq.pop();
                    map.erase(m.first);
                    break;
                }
            }
        }
        return topkf;
    }
};
int main(){
    Solution obj;
    vector<int> nums={1,1,1,2,2,3};
    vector<int> res=obj.topKFrequent(nums,2);
    for(auto x:res){
        cout<<x<<" ";
    }
    return 0;
}