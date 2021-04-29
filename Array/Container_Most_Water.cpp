#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& a) {
        int i=0,j=a.size()-1,m=0;
        while(i<j)
        {
            m=max(m,((j-i)*min(a[i],a[j])));
            
            if(a[i]<a[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return m;
    }
};