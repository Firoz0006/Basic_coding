#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_multiset<int> s;
    s.insert(1);
    s.insert(2);    
    s.insert(3);
    s.insert(4);
    s.insert(3);
    s.insert(6);
    s.insert(7);
    cout<<s.size()<<endl;//7,allow duplicate elements
    s.erase(1);
    cout<<s.size()<<endl;//6
    cout<<s.count(3)<<endl;//2,not consider duplicate elements
    for(auto i:s){
        cout<<i<<" ";//{7 6 2 3 3 4},order is not fixed
    }
}