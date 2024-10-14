#include<bits/stdc++.h>
using namespace std;

//Counting Bits(n=2)
//0->0
//1->1
//2->10
//output = [0,1,1]
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>result(n+1);
        if(n==0)
        return result;
        result[0]=0;
        for(int i=1;i<=n;i++){
            if(i%2!=0){
                result[i]=result[i/2]+1;
            }else{
                result[i]=result[i/2];
            }
        }
        return result;
    }
};