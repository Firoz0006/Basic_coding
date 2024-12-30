//Iterator" is a concept in C++ STL that is used to point to the elements of a container.
// It is a pointer-like object that can point to the elements of a container. 
//Iterators are used to traverse the elements of a container. 
//They are used to access the elements of a container.
// There are different types of iterators in C++ STL like input iterators, output iterators, forward iterators,
// bidirectional iterators, and random access iterators.
// Iterators are used in many STL algorithms like sort(), find(), binary_search(), etc. 
//Iterators are used in many STL containers like vector, list, set, map, searching, sorting, etc.

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);  
    v.push_back(5);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    vector<int>::iterator it=v.begin();
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
}