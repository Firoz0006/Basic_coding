#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(1);
    pq.push(8);
    pq.push(4);
    pq.push(6);
    pq.push(5);
        cout<<pq.top()<<" "<<endl;//8 because highest priority element is 8
        pq.pop();
        cout<<pq.top()<<" "<<endl;//6
        cout<<"pq elements are: ";//6 5 4 1
        while(!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();
        
        }

    return 0;
}