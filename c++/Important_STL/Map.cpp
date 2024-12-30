//Map: Map is a container that store elements in key(unique), value pair.
// Each element has a key value and a mapped value. No two mapped values can have same key values.
// It is used to store key value pair. It is a ordered collection of key value pair.
// It is implemented using red black tree. It is used to store unique elements.
// Operations: insert(),erase(),count(),size(),empty()
// It is used in many applications like finding duplicate elements, finding common elements, etc.
//automatically sorted in ascending order of keys.


#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> m;
    m[1]="Firoz";
    m[2]="Alam";
    m[3]="Khan";
    m[4]="Firoz";
    cout<<m[1]<<endl;
    cout<<m[4]<<endl;
}