#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool comp(pair<string,int> a, pair<string,int> b)
    {
        if(a.second==b.second)
        {
            return a.first<b.first;
        }
        return a.second>b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> m;
        vector<string> v;
        for(int i=0;i<words.size();i++)
        {
            m[words[i]]++;
        }
        
        vector<pair<string,int>> vp;
        
        unordered_map<string,int> :: iterator itr = m.begin();
        for(;itr!=m.end();itr++)
        {
            vp.push_back(make_pair(itr->first,itr->second));
        }
        
        sort(vp.begin(),vp.end(),comp);
        
        for(int i=0;i<k;i++)
        {
            v.push_back(vp[i].first);
        }
        
        return v;
    }
};