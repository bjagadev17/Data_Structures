#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int climbStairs(int n) {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        if(n==2)
        {
            return 2;
        }
        int p[n+1];
        p[0]=0;
        p[1]=1;
        p[2]=2;
        for(int i=3;i<=n;i++)
        {
            p[i]=p[i-1]+p[i-2];
        }
        return p[n];
    }
};