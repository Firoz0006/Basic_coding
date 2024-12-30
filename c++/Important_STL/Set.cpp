//Set is a container that stores unique elements following a specific order.
//Operations: insert(),erase(),count(),size(),empty()
//It is implemented using balanced binary search tree.
//It is used in many applications like finding unique elements, finding common elements,
// finding uncommon elements, etc.
//
#include<bits/stdc++.h>
using namespace std;

int main(){

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(3);
    s.insert(6);
    s.insert(7);
    s.insert(3);
    cout<<s.size()<<endl;//but set contains {1,2,3,4,6,7} in sorted order only
    s.erase(1);
    cout<<s.size()<<endl;
    cout<<s.count(3)<<endl;//output not 3 because set contains unique elements,not allow duplicate elements
    for(auto i:s){
        cout<<i<<" ";//{2 3 4 6 7},order is fixed
    }

}