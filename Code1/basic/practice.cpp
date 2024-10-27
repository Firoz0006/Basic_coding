#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,4,6,7,8,9,10};
    int target=5,d,res;
    int diff=INT_MAX;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        if(target>=a[i]){
            d=target-a[i];
        }
        else{
            d=a[i]-target;
        }
        if(d<diff){
            diff=d;
            res = a[i];
        }
    }

    cout << res << endl;
}