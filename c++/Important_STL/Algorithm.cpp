#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,8,4,5,7,6,9,3};
    sort(v.begin(),v.end());//sort in ascending order
    sort(v.begin(),v.end(),greater<int>());//sort in descending order

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}