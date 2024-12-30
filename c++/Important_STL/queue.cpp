// Queue: Linear Data Structure,which is working on FIFO principle.
// Operations: push(),pop(),front(),back(),empty(),size()
//insertion is done at the back and deletion is done at the front.
//queue is implemented using array or linked list.
//queue is used in many applications like BFS, level order traversal, printer queue, CPU scheduling,
//BFS, level order traversal, printer queue etc.

#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    return 0;
}