#include<bits/stdc++.h>
using namespace std;
int main(){
    // stack<int> st;
    // st.push(2);
    // st.push(3);
    // st.push(5);
    // st.push(1);
    // st.push(8);
    // st.push(0);
    // while (!st.empty())
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    //     /* code */
   

    priority_queue<int> pq;
    pq.push(1);
    pq.push(3);
    pq.push(4);
    pq.push(4);
    pq.push(6);
    pq.push(7);

    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
   
}

