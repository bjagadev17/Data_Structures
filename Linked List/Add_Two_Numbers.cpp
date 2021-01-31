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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3=new ListNode(0);
        int c=0;
        int s;
        
        ListNode *l=l3;
        while(l1 || l2)
        {
            s=c+(l1?l1->val:0)+(l2?l2->val:0);
            if(s>=10)
            {
                c=1;
            }
            else
            {
                c=0;
            }
            s=s%10;
            
            l->next=new ListNode(s);
            l=l->next;
            
            if(l1)
            {
                l1=l1->next;
            }
            if(l2)
            {
                l2=l2->next;
            }
        }
        if(c)
        {
            l->next=new ListNode(1);
        }
        
        return l3->next;
    }
};