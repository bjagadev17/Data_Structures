#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.length()==0 || s.length()==1)
        {
            return 0;
        }
        
        vector<int> v;
        int m=0;
        
        v.push_back(-1);
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                v.push_back(i);
            }
            else
            {
                if(v.size()!=0)
                {
                    v.pop_back();
                }
                
                if(v.size()!=0)
                {  
                   m=max(m,i-v[v.size()-1]); 
                }
                else
                {
                    v.push_back(i);
                }
            }
        }
        return m;
    }
};

int main()
{
    string s;
    cout<<"Enter some brackets:"<<endl;
    cin>>s;
    Solution s1;

    cout<<"Longest length of valid substring is "<<s1.longestValidParentheses(s);
    
    return 0;
}