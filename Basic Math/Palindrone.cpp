#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        
        int p=x;
        long long  r=0;
        while(p)
        {
            r=10*r+(p%10);
            p=p/10;
        }
        if(r==x)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;

    Solution s1;
    if(s1.isPalindrome(n))
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }
}