#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
    }

    //using iterator method
    vector<int>:: iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";//why * bcoz it is a pointer
    }
    for(auto ele : v){
        cout<<ele<<" "<<endl;
    }

        return 0;
}