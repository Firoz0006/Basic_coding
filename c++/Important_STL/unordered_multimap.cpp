#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_multimap<int,string> m;
    
    m.insert({1,"Firoz"});
    m.insert({2,"Alam"});
    m.insert({3,"Khan"});
    m.insert({4,"Firoz"});
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
}