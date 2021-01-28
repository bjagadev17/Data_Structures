#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root==NULL)
        {
            return v;
        }
        deque <TreeNode*> dq;
        dq.push_back(root);
        
        bool flag=true;
        
        while(!dq.empty())
        {
            int s = dq.size();
            vector<int> p;
            if(flag)
            {
                while(s--)
                {
                    TreeNode *temp = dq.front();
                    dq.pop_front();
                    p.push_back(temp->val);
                    if(temp->left)
                    {
                        dq.push_back(temp->left);
                    }
                    if(temp->right)
                    {
                        dq.push_back(temp->right);
                    }
                }
            }
            else
            {
                while(s--)
                {
                    TreeNode *temp = dq.back();
                    dq.pop_back();
                    p.push_back(temp->val);
                    if(temp->right)
                    {
                        dq.push_front(temp->right);
                    }
                    if(temp->left)
                    {
                        dq.push_front(temp->left);
                    }
                    
                }
            }
            flag=!flag;
            v.push_back(p);
        }
        return v;
    }
};