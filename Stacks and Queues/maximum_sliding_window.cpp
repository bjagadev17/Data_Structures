#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        deque<int> dq;
        
        vector<int> v;
        for(int i=0;i<k;i++)
        {
            while(!dq.empty() && a[i]>=a[dq.back()])
            {
                dq.pop_back();
            }
            
            dq.push_back(i);
        }
        
        for(int i=k; i<a.size();i++)
        {
            v.push_back(a[dq.front()]);
            
            while(!dq.empty() && dq.front()<=i-k)
            {
                dq.pop_front();
            }
            
            while(!dq.empty() && a[i]>=a[dq.back()])
            {
                dq.pop_back();
            }
            
            dq.push_back(i);
            
            
        }
        if(!dq.empty()){
            v.push_back(a[dq.front()]);
        }
        
        return v;
    }
};