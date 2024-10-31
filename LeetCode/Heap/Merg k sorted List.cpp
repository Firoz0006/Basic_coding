#include<bits/stdc++.h>
using namespace std;
//merg k sorted list

   // Definition for singly-linked list.
    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
    };

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans=new ListNode(0);
        ListNode* trv=ans;
        for(int i=0;i<lists.size();i++)
        {
            trv=ans;
            ListNode* curr=lists[i];
            ListNode* prev;
            while(curr)
            {
                while(trv->next && trv->next->val<curr->val)
                {
                    trv=trv->next;
                }
                prev=trv->next;
                trv->next=curr;
                curr=curr->next;
                trv=trv->next;
                trv->next=NULL;
                trv->next=prev;
            }
        }
        return ans->next;

        
    }
};
int main(){
    Solution obj;
    vector<ListNode*> lists;
    ListNode* l1=new ListNode(1);
    l1->next=new ListNode(4);
    l1->next->next=new ListNode(5);
    ListNode* l2=new ListNode(1);
    l2->next=new ListNode(3);
    l2->next->next=new ListNode(4);
    ListNode* l3=new ListNode(2);
    l3->next=new ListNode(6);
    lists.push_back(l1);
    lists.push_back(l2);
    lists.push_back(l3);
    ListNode* ans=obj.mergeKLists(lists);
    while(ans)
    {
        cout<<ans->val<<" ";
        ans=ans->next;
    }
    return 0;
}