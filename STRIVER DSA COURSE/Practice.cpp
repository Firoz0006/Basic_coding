#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int Alice(vector<int>&arr,int z){
            int n = arr.size();
            int c=0;

            for(int i=0;i<n;i++){
                for(int j= i+1;j<n;j++){
                    if(arr[0]==arr[j]){
                        c++;
                    }
                }
            }
            return n-c-1;

        }
};

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}







