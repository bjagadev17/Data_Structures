#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.length()+s2.length()!=s3.length())
        {
            return false;
        }
        
        bool b[s1.length()+1][s2.length()+1];
        memset(b,false,sizeof(b));
        
        for(int i=0;i<=s1.length();i++)
        {
            for(int j=0;j<=s2.length();j++)
            {
                 if(i==0 && j==0)
                {
                    b[i][j]=true;
                }
                else if(i==0)
                {
                    if(s2[j-1]==s3[j-1])
                    {
                        b[i][j]=b[i][j-1];
                    }
                    
                }
                else if(j==0)
                {
                    if(s1[i-1]==s3[i-1])
                    {
                        b[i][j]=b[i-1][j];
                    }
                }
                else if(s1[i-1]==s3[i+j-1] && s2[j-1]!=s3[i+j-1])
                {
                    b[i][j]=b[i-1][j];
                }
                else if(s1[i-1]!=s3[i+j-1] && s2[j-1]==s3[i+j-1])
                {
                    b[i][j]=b[i][j-1];
                }
                else if(s1[i-1]==s3[i+j-1] && s2[j-1]==s3[i+j-1])
                {
                    b[i][j]=b[i-1][j]||b[i][j-1];
                }
            }
        }
        
        return b[s1.length()][s2.length()];
    }
};