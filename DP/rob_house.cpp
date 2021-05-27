#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& a) {
        if(a.size()==1)
        {
            return a[0];
        }
        vector<int> p(a.size(),0);
        
        p[0] = a[0];
        p[1] = max(a[0],a[1]);
        
        for(int i=2;i<a.size();i++)
        {
            p[i] = max(p[i-1],p[i-2]+a[i]);
        }
        
        return p[a.size()-1];
    }
};