#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
        {
            return 0;
        }
        
       
        int l=0;
        
        for(int i=0;i<s.length();i++)
        {
            bool b[256];
            memset(b,false,sizeof(b));
            for(int j=i;j<s.length();j++)
            {
                if(b[s[j]]==true)
                {
                    break;
                }
                else
                {
                    b[s[j]]=true;
                    l=max(l,j-i+1);
                }
                
            }
            b[s[i]]=false;
        }
        return l;
    }
};

int main()
{
    string s;
    cin>>s;
    Solution s1;
    cout<<"Length of Longest Substring without repeated character is :"<<s1.lengthOfLongestSubstring(s);
    return 0;
}