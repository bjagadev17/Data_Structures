#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> v;
        int n=words.size();
        unordered_map<string, int> m1;
        
        for(int i=0;i<n;i++)
        {
            m1[words[i]]++;
        }
        
        int l1 = words[0].length();
        int l2 = l1*n;
        
        if(l2>s.length())
        {
            return v;
        }
        for(int i=0;i<s.size()-l2+1;i++)
        {
            string temp = s.substr(i,l2);
            unordered_map <string, int> m2;
            int j=0,k=0;
            while(j<n)
            {
                string p=temp.substr(k,l1);
                m2[p]++;
                k+=l1;
                j++;
            }
            if(m1==m2)
            {
                v.push_back(i);
            }
            
            
        }
        return v;
    }
};