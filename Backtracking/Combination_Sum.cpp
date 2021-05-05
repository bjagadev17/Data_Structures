#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void find_Sum(vector<vector<int>> &v, vector<int>& a, vector<int>& p, int k, int i)
    {
        if(k==0)
        {
            v.push_back(p);
            return;
        }
        
        while(i<a.size() && k-a[i]>=0)
        {
            p.push_back(a[i]);
            
            find_Sum(v,a,p,k-a[i],i);
            i++;
            
            p.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& a, int k) {
        vector<vector<int>> v;
        vector<int> p;
        
        sort(a.begin(),a.end());
        
        a.erase(unique(a.begin(),a.end()),a.end());
        
        find_Sum(v,a,p,k,0);
        return v;
        
    }
};