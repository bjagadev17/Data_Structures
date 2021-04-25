#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        unordered_map<char,int> m;
        
        for(int i=0;i<s.length();i++)
        {
              m[s[i]]++;     
        }
        
        for(int i=0;i<t.length();i++)
        {
            if(m.find(t[i])==m.end())
            {
                return false;
            }
            if(m[t[i]]==0)
            {
                return false;
            }
            m[t[i]]--;
        }
        
       return true;
    }
};

int main()
{
    string a,b;
    cout<<"Enter First Word:"<<endl;
    cin>>a;

    cout<<"Enter Second Word:"<<endl;
    cin>>b;

    Solution s1;

    if(s1.isAnagram(a,b))
    {
        cout<<"Anagram\n";
    }
    else
    {
        cout<<"Not Anagram\n";
    }

    return 0;
}