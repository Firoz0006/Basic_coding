#include<bits/stdc++.h>
using namespace std;
// Merge two sorted linked lists

    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode fake(-1);
        ListNode* last=&fake;
        while(l1 != NULL && l2 != NULL) {
            if(l1->val<l2->val){
                last->next=l1;
                last=l1;
                l1=l1->next;
            }
            else{
                last->next=l2;
                last=l2;
                l2=l2->next;
            }
        }
        if(l1!= NULL){
            last->next=l1;
        }
        if(l2!=NULL){
            last->next=l2;
            
        }
        return fake.next;
        
    }
};
int main(){
    Solution s;
    ListNode* l1=new ListNode(1);
    l1->next=new ListNode(2);
    l1->next->next=new ListNode(4);
    ListNode* l2=new ListNode(1);
    l2->next=new ListNode(3);
    l2->next->next=new ListNode(4);
    ListNode* res=s.mergeTwoLists(l1,l2);
    while(res!=NULL){
        cout<<res->val<<" ";
        res=res->next;
    }
    return 0;
}