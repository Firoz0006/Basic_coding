#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
     int maxArea(vector<int>& height) {
        int n = height.size();
        int maxArea=0,lp=0,rp=n-1;

        while(lp<rp){
            int w=rp-lp;
            int ht=min(height[lp],height[rp]);
            int area=w*ht;
            maxArea=max(maxArea,area);

            height[lp]<height[rp]?lp++:rp--;
        }

        return  maxArea;
        
    }
};
int main(){
    Solution s;
    vector<int> height = {1,8,6,2,5,4,8,3,7};//output=49
    cout<<"max water:"<<s.maxArea(height) << endl;
    return 0;
}
