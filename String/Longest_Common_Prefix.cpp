#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        if(str.size()==0)
        {
            return "";
        }
        if(str.size()==1)
        {
            return str[0];
        }
        string s="";
        sort(str.begin(),str.end());
        
        for(int i=0;i<str[0].length();i++)
        {
            if(str[0][i]!=str[str.size()-1][i])
            {
                break;
            }
            s+=str[0][i];
        }
        return s;
    }
};

