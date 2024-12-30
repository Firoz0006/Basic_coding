//Stack: It is a linear data structure which is working on LIFO principle.
//Operations: push(),pop(),top(),empty(),size()
//Insertion and deletion is done at the top, i.e. only one end of the stack.
//Stack is used in many applications like function calling,recursive,DFS, backtracking,
// expression evaluation, parenthesis matching,tower of hanoi, n-queen, etc.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    return 0;
}