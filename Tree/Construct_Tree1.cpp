#include<bits\stdc++.h>
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
    int Search(vector<int>& inorder,int l,int h,int d)
    {
        for(int i=l;i<=h;i++)
        {
            if(inorder[i]==d)
            {
                return i;
            }
        }
        return 0;
    }
    TreeNode* TreeBuilder(vector<int>& preorder, vector<int>& inorder,int l,int h,int* index)
    {
        if(l>h)
        {
            return NULL;
        }
        TreeNode *root = new TreeNode(preorder[*index]);
        (*index)++;
        int pos = Search(inorder,l,h,root->val);
        
        root->left = TreeBuilder(preorder,inorder,l,pos-1,index);
        root->right = TreeBuilder(preorder,inorder,pos+1,h,index);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0)
        {
            return NULL;
        }
        int preIndex=0;
        TreeNode* root = TreeBuilder(preorder,inorder,0,inorder.size()-1,&preIndex);
        return root;
    }
};