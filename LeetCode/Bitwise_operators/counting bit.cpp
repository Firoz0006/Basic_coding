#include<bits/stdc++.h>
using namespace std;
//counting bits,n=5,0,1,1,2,1,2 (0,1,2,3,4,5)->(0,1,10,11,100,101),counting no of 1's in binary representation of no

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res(n+1);
        if(n==0)
        return res;
        res[0]=0;
        for(int i=1;i<=n;i++){
            if(i%2!=0){
                res[i]=res[i/2]+1;
            }else{
                res[i]=res[i/2];
            }
        }
        return res;
    }
};
int main(){
    Solution s;
    int n;
    cout<<"enter the no : ";
    cin>>n;
    vector<int>rest=s.countBits(n);
    for(auto i:rest){
        cout<<i<<" ";
    }
    return 0;
}

//2nd method
// class Solution {
// public:
//     vector<int> countBits(int n) {
//         vector<int> res(n + 1);
//         res[0] = 0;
//         for (int i = 1; i <= n; i++) {
//             res[i] = res[i & (i - 1)] + 1;
//         }
//         return res;
//     }
// };
