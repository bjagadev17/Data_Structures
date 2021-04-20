#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
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
        if(v.size()==0)
        {
            return 0;
        }
        return v[v.size()-1].length();
        
    }
};

int main()
{
    string s;
    cout<<"Enter some words separated by spaces : "<<endl;
    cin>>s;
    cout<<s<<endl;

    Solution s1;
    cout<<"Length of last word: "<<s1.lengthOfLastWord(s)<<endl;
    return 0;
}