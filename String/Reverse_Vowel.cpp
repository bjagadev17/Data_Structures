#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        vector<int> v;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                v.push_back(i);
            }
        }
        int i=0,j=v.size()-1;
        char t;
        
        while(i<=j)
        {
            t=s[v[i]];
            s[v[i]]=s[v[j]];
            s[v[j]]=t;
            i++;
            j--;
        }
        return s;
    }
};