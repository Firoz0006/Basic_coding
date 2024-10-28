#include<bits/stdc++.h>
using namespace std;
//Reorder List
struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
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
int main(){
    Solution s;
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    s.reorderList(head);
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    return 0;
}