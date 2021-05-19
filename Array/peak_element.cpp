#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& a) {
        if(a.size()==0 || a.size()==1)
        {
            return 0;
        }
         int begin = 0;
         int end = a.size()-1;
        
        while(begin<end)
        {
            int mid = begin +((end-begin)/2);
            
            if(a[mid+1]>a[mid])
            {
                begin = mid+1;
            }
            else
            {
                end = mid;
            }
        }
        return begin;
        
       
    }
};