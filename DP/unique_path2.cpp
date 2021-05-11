#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& a) {
        int m=a.size();
        int n=a[0].size();
        
        if(a[0][0]==1)
        {
            return 0;
        }
        
        int p[m][n];
        
        memset(p,0,sizeof(p));
        p[0][0]=1;
        for(int i=1;i<n;i++)
        {
            if(a[0][i]==0)
            {
                p[0][i]=p[0][i-1];
            }
        }
         for(int i=1;i<m;i++)
        {
            if(a[i][0]==0)
            {
                p[i][0]=p[i-1][0];
            }
        }
        
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(a[i][j]==0)
                {
                    p[i][j]+=p[i-1][j]+p[i][j-1];
                }
            }
        }
        
        return p[m-1][n-1];
    }
};