#include<bits/stdc++.h>
using namespace std;
//merg k sorted list
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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