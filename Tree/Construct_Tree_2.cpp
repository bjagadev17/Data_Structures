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
    TreeNode* TreeBuilder(vector<int>& postorder, vector<int>& inorder,int l,int h,int* index)
    {
        if(l>h)
        {
            return NULL;
        }
        TreeNode *root = new TreeNode(postorder[*index]);
        (*index)--;
        int pos = Search(inorder,l,h,root->val);
        root->right = TreeBuilder(postorder,inorder,pos+1,h,index);
        root->left = TreeBuilder(postorder,inorder,l,pos-1,index);
        
        
        
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(postorder.size()==0)
        {
            return NULL;
        }
        int postIndex=postorder.size()-1;
        TreeNode* root = TreeBuilder(postorder,inorder,0,inorder.size()-1,&postIndex);
        return root;
    }
};