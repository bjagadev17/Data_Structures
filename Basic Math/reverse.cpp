#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int d = 0;
        while(x)
        {
            int r = x%10;
            x=x/10;
            
            if(d>INT_MAX/10 || (d==INT_MAX/10 && r>7))
            {
                return 0;
            }
            if(d<INT_MIN/10 || (d==INT_MIN/10 && r<-8))
            {
                return 0;
            }
            d = d*10+r;
        }
        return d;
    }
};


int main()
{
    int n;
    cout<<"Enter the Number to be reversed:\n";
    cin>>n;

    Solution s;
    int rev = s.reverse(n);

    cout<<"The number after reversing is:\n"<<rev;

    return 0;
}