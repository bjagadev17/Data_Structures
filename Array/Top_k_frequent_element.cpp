#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool comp(pair<int,int> a, pair<int,int> b)
    {
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& a, int k) {
        unordered_map<int,int> m;
        vector<int> v;
        for(int i=0;i<a.size();i++)
        {
            m[a[i]]++;
        }
        
        vector<pair<int,int>> vp;
        
        unordered_map<int,int> :: iterator itr = m.begin();
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