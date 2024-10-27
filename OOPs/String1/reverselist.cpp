#include<bits/stdc++.h>
using namespace std;
class Linklist{
    public:
    int data;
    Linklist* next;

};
Linklist*root=new Linklist();
int main(){
    root->data=10;
    Linklist* tail=root;
    for(int i=1;i<6;i++){
        Linklist *tmp=new Linklist();
        tmp->data=(i+1)*10;
        tail->next=tmp;
        tail=tmp;


    }
    Linklist*cur=root;
    while (cur)
    {
        cout<<cur->data<<" ";
        cur=cur->next;
    }
    cout<<endl;
    stack<int> st;
    cur=root;
    while (cur)
    {
    st.push(cur->data);
     cur=cur->next;   /* code */
    }
    while (st.empty()==false)
    {
        cout<<st.top()<<" ";
        st.pop();
        /* code */
    }
    
    return 0;

}