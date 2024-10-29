#include<bits/stdc++.h>
using namespace std;
//Remove Nth Node From End of List
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;

        // Count the number of nodes in the list
        while (temp) {
            count++;
            temp = temp->next;
        }

        int step = count - n;

        // If the node to remove is the head node
        if (step == 0) return head->next;

        temp = head;
        
        // Move to the node just before the one to be removed
        for (int i = 1; i < step; i++) {
            temp = temp->next;
        }

        // Remove the nth node from the end
        temp->next = temp->next->next;

        return head;


        // ListNode* res=new ListNode(0,head);
        // ListNode* dummy=res;
        // for(int i=0;i<n;i++)
        // {
        //     head=head->next;
        // }
        // while(head!=nullptr)
        // {
        //     head=head->next;
        //     dummy = dummy->next;
        // }
        // dummy->next=dummy->next->next;
        // return res->next;
    }
};