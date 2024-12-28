//Deque is a double-ended queue. It is more flexible than a stack and a queue.
// It allows insertion and deletion from both the ends. It is implemented using dynamic array. 
//It is a sequence container that supports random access to its elements.
// It is similar to vector but more efficient in case of insertion and deletion. 
//It is not a part of STL but it is a part of C++ standard library. 
//It is used in many applications like implementing stack, queue, double-ended queue, etc.
//Deque is implemented using array or linked list.
//Operations: push_back(),push_front(),pop_back(),pop_front(),front(),back(),empty(),size()
//It is used in many applications like implementing 

#include<bits/stdc++.h>
#include<deque>//include the deque library in header file
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(4);
    cout<<dq.size()<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    dq.pop_back();
    cout<<dq.back()<<endl;
    dq.pop_front();
    cout<<dq.front()<<endl;
    return 0;   
}