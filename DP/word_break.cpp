#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> b(s.length()+1,false);
        b[0] = true;
        
        for(int i=1;i<=s.length();i++)
        {
            if(b[i]==false && count(wordDict.begin(),wordDict.end(),s.substr(0,i)))
            {
                b[i] = true;
            }
            if(b[i] == true)
            {
                if(i==s.length())
                {
                    return true;
                }
                for(int j=i+1;j<=s.length();j++)
                {
                    if(b[j]==false && count(wordDict.begin(),wordDict.end(),s.substr(i,j-i)))
                    {
                        b[j] = true;
                    }
                    if(j==s.length() && b[j]==true)
                    {
                        return true;
                    }
                }
            }
        }
        
        return false;
     
    }
};