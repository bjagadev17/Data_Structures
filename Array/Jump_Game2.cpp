#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& a) {
        
        if(a.size()==0 || a.size()==1)
        {
            return 0;
        }
        
        int jump = 1;
        
        int m = a[0];
        int s = a[0];
        
        for(int i=1;i<a.size();i++)
        {
            m = max(m, i+a[i]);
            s--;
            
            if(s==0)
            {
                if(i!=a.size()-1)
                {
                    jump++;
                }
                
                s = m-i;
            }
        }
        return jump;
    }
};