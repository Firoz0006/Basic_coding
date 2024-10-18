#include<bits/stdc++.h>
using namespace std;
//Merge k Sorted Lists
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