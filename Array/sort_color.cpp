#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& a) {
        int j = 0;
        int k = a.size()-1;
        
        int i = 0;
        
        while(i<=k)
        {
            if(a[i]==0)
            {
                swap(a[i],a[j]);
                i++;
                j++;
            }
            else if(a[i]==2)
            {
                swap(a[i],a[k]);
                k--;
            }
            else
            {
                i++;
            }
        }
    }
};