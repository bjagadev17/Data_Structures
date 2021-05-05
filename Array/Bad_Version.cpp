#include<bits/stdc++.h>
using namespace std;


// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long begin = 1;
        long long end = n;
        
        int l=0;
        
        while(begin <= end)
        {
            long long  mid = (begin+end)/2;
            if(isBadVersion(mid))
            {
                l = mid;
                end = mid-1;
                
            }
            else
            {
                begin = mid+1;
            }
        }
        return l;
    }
};