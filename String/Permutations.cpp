#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string p, string s) {
        if(p.length()>s.length())
        {
            return false;
        }
        
        int i=0,j=0;
        vector<int> a(26,0);
        vector<int> b(26,0);
        
        while(i<p.length())
        {
            b[p[i]-97]++;
            a[s[i]-97]++;
            i++;
        }
        i--;
        while(i<s.length())
        {
            if(a==b)
            {
                return true;
            }
            i++;
            if(i!=s.length())
            {
                 a[s[i]-97]++;
            }
            a[s[j]-97]--;
            j++;
        }
        
        return false;
    }
};

int main()
{
    string s1,s2;
    cout<<"First word"<<endl;
    cin>>s1;

    cout<<"Main Word: "<<endl;
    cin>>s2;

    Solution S1;
    if(S1.checkInclusion(s1,s2))
    {
        cout<<"Permutation\n";
    }
    else
    {
        cout<<"Not Permutation\n";
    }

    return 0;
}