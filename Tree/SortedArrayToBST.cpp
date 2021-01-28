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
    TreeNode *sortArrayToBST(vector<int> a,int l,int h)
    {
        if(l>h)
        {
            return nullptr;
        }
        int m = (l+h)/2;
        TreeNode *root = new TreeNode(a[m]);
        root->left = sortArrayToBST(a,l,m-1);
        root->right = sortArrayToBST(a,m+1,h);
        return root;
        
        
    }
    TreeNode* sortedArrayToBST(vector<int>& a) {
        TreeNode *root = sortArrayToBST(a,0,a.size()-1);
        return root;
    }
};

int main()
{
    int n;
    cout<<"Enter the dimension of Array:\n";
    cin>>n;

    vector<int> a;
    cout<<"Enter the numbers in sorted order\n";
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        a.push_back(p);
    }
    
    Solution s;
    TreeNode *root = s.sortedArrayToBST(a);
    return 0;

}