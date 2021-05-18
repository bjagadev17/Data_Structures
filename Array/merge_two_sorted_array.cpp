#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        if(n==0)
        {
            return;
        }
        vector<int> c(m+n,0);
        
        int i = 0, j = 0, k = 0;
        
        while(i<m && j<n)
        {
            if(a[i]<=b[j])
            {
                c[k++] = a[i++];
            }
            else
            {
                c[k++] = b[j++];
            }
        }
        
        while(i<m)
        {
            c[k++] = a[i++];
        }
        
        while(j<n)
        {
            c[k++] = b[j++];
        }
        
        for(int i=0;i<m+n;i++)
        {
            a[i] = c[i];
        }
        
    }
};