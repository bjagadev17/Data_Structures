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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
        {
            vector<vector<int>> v;
            return v;
        }
        vector<vector<int>> v;
        queue<TreeNode*> q;
        q.push(root);
       
        while(!q.empty())
        {
            int s=q.size();
            vector<int> p;
            while(s--)
            {
                TreeNode *temp=q.front();
                q.pop();

                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                }
                if(temp->right!=NULL)
                {
                    q.push(temp->right);
                }
                p.push_back(temp->val);
            }
            v.push_back(p);
            
        }
        
        return v;
        
    }
};