#include<bits/stdc++.h>
using namespace std;

  //struct node of linked list
struct Node
{
    int data;
    struct Node*next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

//reverse the linked list

Node* reverseRecursive(Node*head){

    if(head == NULL || head->next == NULL){
        return head;
    }

    Node*prev = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return prev;
}

// main function of Linked list
