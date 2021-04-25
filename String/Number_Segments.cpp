#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countSegments(string s) {
        vector<string> v;
        string p="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                if(p.length()>0)
                {
                    v.push_back(p);
                }
                p="";
            }
            else
            {
                p+=s[i];
            }
        }
        if(p!="")
        {
            v.push_back(p);
        }
        return v.size();
    }
};