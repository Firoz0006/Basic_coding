#include<bits/stdc++.h>
using namespace std;
// reverse linked list
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* cur = head;
        ListNode* next;

        while (cur != NULL) {
            next = cur->next;    // Save the next node
            cur->next = prev;     // Reverse the current node's pointer
            prev = cur;           // Move `prev` to the current node
            cur = next;           // Move `cur` to the next node
        }

        // Return `prev`, which is now the head of the reversed list
        return prev;
    }
};
     
        // ListNode*node=nullptr;
        // while(head!=NULL)
        // {
        //     ListNode * temp=head->next;
        //     head->next=node;
        //     node=head;
        //     head=temp;
        // }
        // return node;
