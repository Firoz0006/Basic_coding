//Unorder_set:  similar to set but it does not store elements in sorted order,store any order
//Operations: insert(),erase(),count(),size(),empty()
// faster insertion and deletion than set
//It is used in many applications like finding unique elements,  etc.
//implemented using hashing but set is implemented using balanced binary search tree.

#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(9);
    s.insert(3);
    s.insert(11);
    s.insert(12);
    s.insert(13);
    cout<<s.size()<<endl;//12,not consider duplicate elements
    s.erase(1);
    cout<<s.size()<<endl;//11
    cout<<s.count(3)<<endl;//1,not consider duplicate elements
    for(auto i:s){
        cout<<i<<" ";//{13 12 4 3 2 5 6 7 8 9 11},order is not fixed
    }
    return 0;
}