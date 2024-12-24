#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {6,2,7,3,8,4,5};

    sort(v.rbegin(), v.rend());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}