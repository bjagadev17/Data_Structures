#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if(s.length()==0)
        {
            return true;
        }
        string st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push_back(s[i]);
            }
            else if(s[i]==')')
            {
                if(st.back()!='(')
                {
                    return false;
                }
                st.pop_back();
            }
            else if(s[i]=='}')
            {
                if(st.back()!='{')
                {
                    return false;
                }
                st.pop_back();
            }
            else if(s[i]==']')
            {
                if(st.back()!='[')
                {
                    return false;
                }
                st.pop_back();
            }
        }
        if(st.length()==0)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    string s;
    cout<<"Enter some brackets:"<<endl;
    cin>>s;
    Solution s1;
    if(s1.isValid(s))
    {
        cout<<"Valid Input"<<endl;
    }
    else
    {
        cout<<"Mismatch Input"<<endl;
    }
    return 0;
}