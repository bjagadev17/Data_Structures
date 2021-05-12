#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        
        int a[m+1][n+1];
        
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0)
                {
                    a[i][j] = j;
                }
                else if(j==0)
                {
                    a[i][j] = i;
                }
                else if(word1[i-1]==word2[j-1])
                {
                    a[i][j] = a[i-1][j-1];
                }
                else
                {
                    a[i][j] = 1 + min(a[i][j-1], min(a[i-1][j], a[i-1][j-1]));
                }
            }
        }
        
        return a[m][n];
            
    }
};