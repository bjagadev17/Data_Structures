#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numDecodings(string s) {
        vector <int> p(s.length()+1,0);
        p[0] = 1;
        int k;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='0')
            {
                p[i+1]+=p[i];
            }
            if(i)
            {
                k = (s[i-1]-'0')*10 + (s[i]-'0');
                if(k>=10 && k<=26)
                {
                  p[i+1]+=p[i-1];   
                }
            }
        }
        
        return p[p.size()-1];
    }
};