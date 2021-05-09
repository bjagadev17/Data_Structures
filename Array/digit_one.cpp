#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c=0;
        
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(i==digits.size()-1)
            {
                digits[i] = digits[i]+1+c;
            }
            else
            {
                digits[i] = digits[i]+c;
            }
            
            c  = digits[i]/10;
            digits[i] %= 10;
        }
        
        if(c)
        {
            reverse(digits.begin(),digits.end());
            digits.push_back(1);
            reverse(digits.begin(),digits.end());
        }
        
        return digits;
    }
};