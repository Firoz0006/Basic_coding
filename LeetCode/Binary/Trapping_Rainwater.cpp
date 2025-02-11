#include<bits/stdc++.h>
using namespace std;

//Trapping Rainwater
//https://leetcode.com/problems/trapping-rain-water/description/

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(),water=0;
        int leftmax=0,rightmax=0,maxheight=height[0],index=0;
        for(int i=1;i<n;i++){
            if(maxheight<height[i]){
                maxheight=height[i];
                index=i;
            }
        }
        for(int i=0;i<index;i++){//left part
            if(leftmax>height[i])
            water+=leftmax-height[i];
            else
            leftmax=height[i];
        }
        for(int i=n-1;i>index;i--){//right part
            if(rightmax>height[i])
            water+=rightmax-height[i];
            else
            rightmax=height[i];
        }
        return water;
    }

};