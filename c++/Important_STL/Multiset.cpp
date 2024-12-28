//Multiset: Multiset is similar to set but it can have multiple elements with the same value.
// It is an associative container that contains a sorted set of objects of type Key. 
//It is usually implemented using Red-Black Tree. Time complexity of all operations is O(logn).
//Operations: insert(),erase(),count(),size(),empty()
//It is used in many applications like finding duplicate elements, finding common elements, etc.

#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(3);
    ms.insert(6);
    ms.insert(7);
    ms.insert(3);
    cout << ms.size() << endl; // Outputs: 8,{1,2,3,3,3,4,6,7},allow duplicate elements
    ms.erase(1);
    cout << ms.size() << endl; // Outputs: 7,{2,3,3,3,4,6,7}
    cout << ms.count(3) << endl; // Outputs: 3,{3,3,3}
}
