#include<bits/stdc++.h>
using namespace std;
int main(){
    int num[4]={2,7,11,15};
    int target=18;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(num[i]+num[j]==target){
                cout<<i<<" "<<j <<endl;
            }
        }
    }
    return 0;
}