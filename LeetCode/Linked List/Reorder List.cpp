#include<bits/stdc++.h>
using namespace std;
//Reorder List
class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL) return ;
        ListNode * dummy = new ListNode(0);
        dummy->next = head;
        ListNode * slow = dummy;
        ListNode * fast = dummy;

        while(fast && fast->next){
            slow = slow ->next;
            fast = fast->next->next;
        }
        
        stack <ListNode*> st;
        ListNode* temp = slow->next;
        slow -> next = NULL;

        while(temp){
            st.push(temp);
            temp = temp->next;
        }

        slow = dummy->next;
        while(!st.empty()){
            temp = st.top();
            st.pop();
        temp->next = slow->next;
    slow->next = temp;
    slow = temp->next;

        }
        
       dummy->next = NULL;
       delete dummy;



        
    }
};