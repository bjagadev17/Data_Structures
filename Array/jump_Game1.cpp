#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool canJump(vector<int>& a) {
        if(a.size()==0 || a.size()==1)
        {
            return true;;
        }
        
        if(a[0]==0)
        {
            return false;
        }
        
        int jump = 1;
        
        int m = a[0];
        int s = a[0];
        
        for(int i=1;i<a.size();i++)
        {
            if(m==a.size()-1)
            {
                return true;
            }
            m = max(m, i+a[i]);
            s--;
            
            if(s==0)
            {
                if(i>=m)
                {
                    return false;
                }
                if(i!=a.size()-1)
                {
                    jump++;
                }
                
                
                s = m-i;
            }
        }
        return true;
    }
};
