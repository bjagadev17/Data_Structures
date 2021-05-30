#include<bits/stdc++.h>
using namespace std;


 struct ListNode {
         int val;
         ListNode *next;
         ListNode() : val(0), next(nullptr) {}
         ListNode(int x) : val(x), next(nullptr) {}
         ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    struct compare{
        bool operator()(ListNode* a, ListNode* b)
        {
            return a->val>b->val;
        }
    };
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>, compare> pq;
        
        for(int i=0;i<lists.size();i++)
        {
            if(lists[i])
            {
                pq.push(lists[i]);
            }

        }
        
        ListNode * head = new ListNode(0);
        ListNode * tail = head;
        
        while(!pq.empty())
        {
            ListNode * cur = pq.top();
            pq.pop();
            tail->next = cur;
            tail = tail->next;
            
            if(cur->next!=nullptr)
            {
                pq.push(cur->next);
            }
            
        }
        
        return head->next;
        
    }
};