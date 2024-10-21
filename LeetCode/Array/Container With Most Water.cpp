#include<bits/stdc++.h>
using namespace std;
//Container With Most Water

//Brute Force
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int maxArea=0;
//         int mw = 0;
//         int n = height.size();

//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 int w=j-i;
//                 int hight= min(height[i],height[j]);
//                 int area = w*hight;
//                 mw = max(mw,area);

//             }
//         }
//         return mw;
        
//     }
// };-----------------------------------------------------------------

//optimize 1
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int  maxArea=0;
//         int left=0;
//         int right=height.size()-1;
//         while(left<right){
//             maxArea=max(maxArea,(right-left)*min(height[left],height[right]));
//             if(height[left]<height[right]){
//                 left++;
//             }else{
//                 right--;
//             }
//         }
//         return maxArea;
        
//     }
// };

//optimize 2..........................................
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
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<<s.maxArea(height);
    return 0;
}