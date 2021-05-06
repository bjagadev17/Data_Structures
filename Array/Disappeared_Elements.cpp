#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        
        vector<int> v;
        
        for(int i=0;i<a.size();i++)
        {
            if((abs(a[i])-1)<a.size() && (a[abs(a[i])-1]>0))
            {
                a[abs(a[i])-1]*=-1;
            }
        }
        
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>0)
            {
                v.push_back(i+1);
            }
        }
        
        return v;
    }
};

