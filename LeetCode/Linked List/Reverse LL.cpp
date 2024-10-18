#include<bits/stdc++.h>
using namespace std;
// reverse linked list

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*node=nullptr;
        while(head!=NULL)
        {
            ListNode * temp=head->next;
            head->next=node;
            node=head;
            head=temp;
        }
        return node;
        
    }
};