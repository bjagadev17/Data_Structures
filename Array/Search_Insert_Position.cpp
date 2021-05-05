#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& a, int k) {
        int beg = 0;
        int end = a.size()-1;
        
        while(beg<=end)
        {
            int m = (beg+end)/2;
            if(a[m]==k)
            {
                return m;
            }
            else if(a[m]>k)
            {
                end = m-1;
            }
            else
            {
                beg = m+1;
            }
        }
        return beg;
    }
};