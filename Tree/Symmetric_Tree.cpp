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
    bool isMirror(TreeNode* p,TreeNode* q)
    {
        if(p==NULL && q==NULL)
        {
             return true;
        }
        if(p && q && p->val==q->val)
        {
            return isMirror(p->left,q->right) && isMirror(p->right,q->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
            return isMirror(root,root);
    }
};