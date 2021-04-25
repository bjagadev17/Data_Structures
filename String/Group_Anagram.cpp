#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string, vector<string>> m;
        string t;
        
        for(int i=0;i<s.size();i++)
        {
            t=s[i];
            sort(t.begin(),t.end());
            m[t].push_back(s[i]);
        }
        
        unordered_map<string, vector<string>> :: iterator itr;
        
        vector<vector<string>> v;
        for(itr=m.begin();itr!=m.end();itr++)
        {
            v.push_back(itr->second);
        }
        
        return v;
        
    }
};