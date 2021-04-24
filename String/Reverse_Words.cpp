#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
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
        
        string t="";
        for(int i=v.size()-1;i>0;i--)
        {
           
            t+=v[i];
            t+=' ';
        }
        t+=v[0];
        return t;
    }
};

int main()
{
    string s;
    cout<<"Enter some words separated by spaces : "<<endl;
    cin>>s;
    cout<<s<<endl;

    Solution s1;
    cout<<"After reversing the word: "<<s1.reverseWords(s)<<endl;
    return 0;
}