#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int max_Rob(vector<int>& a, int i, int n)
    {
        vector<int> p(n+1,0);
        if(i==n)
        {
            return a[n];
        }
        p[i] = a[i];
        p[i+1] = max(a[i],a[i+1]);
        
        for(int j=i+2; j<=n; j++)
        {
            p[j] = max(p[j-1],p[j-2]+a[j]);
        }
        
        return p[n];
    }
    int rob(vector<int>& a) {
        if(a.size()==1)
        {
            return a[0];
        }
        if(a.size()==2)
        {
            return max(a[0],a[1]);
        }
        
        return max(max_Rob(a,0,a.size()-2),max_Rob(a,1,a.size()-1));
    }
};