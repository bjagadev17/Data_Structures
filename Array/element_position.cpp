#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& a, int k) {
        vector<int> v;
        
        int start = 0;
        int end = a.size()-1;
        int p=-1;
        
        while(start <= end)
        {
            int m=(start+end)/2;
            if(a[m]>k)
            {
                end = m-1;
            }
            else if(a[m]<k)
            {
                start = m+1;
            }
            else
            {
                p = m;
                end = m-1;
            }
        }
        v.push_back(p);
        
        start = 0;
        end = a.size()-1;
        p = -1;
        
        while(start <= end)
        {
            int m=(start+end)/2;
            if(a[m]>k)
            {
                end = m-1;
            }
            else if(a[m]<k)
            {
                start = m+1;
            }
            else
            {
                p = m;
                start = m+1;
            }
        }
        v.push_back(p);
        return v;
        
    }
};