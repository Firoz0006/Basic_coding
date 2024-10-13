#include<bits/stdc++.h>
using namespace std;
struct node{
    struct node*prev;
    int data;
    struct node*next;
};
struct node*addAtBeg(struct node* head,int data)
{
    //struct node* temp=malloc(sizeof(struct node));
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;
}
int main(){
    struct node* head=NULL;
    struct node*ptr;
    head=addAtBeg(head,34);
    ptr=head;
    while (ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
        /* code */
    }
    return 0;
    
}