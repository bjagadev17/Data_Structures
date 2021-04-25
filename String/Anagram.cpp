#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> v;
        if(p.length()>s.length())
        {
            return v;
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
                v.push_back(j);
            }
            i++;
            if(i!=s.length())
            {
                 a[s[i]-97]++;
            }
            a[s[j]-97]--;
            j++;
        }
        return v;
        
        
        
    }
};

