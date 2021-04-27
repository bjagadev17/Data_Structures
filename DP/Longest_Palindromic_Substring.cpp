#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        bool b[n][n];
        memset(b,false,sizeof(b));
        
        int l=1;
        int a=0;
        for(int i=0;i<n;i++)
        {
            b[i][i]=true;
        }
        
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                b[i][i+1]=true;
                if(l<2)
                {
                    l=2;
                    a=i;
                }
            }
        }
        
        for(int k=3;k<=n;k++)
        {
            for(int i=0;i<n-k+1;i++)
            {
                int j=i+k-1;
                if(s[i]==s[j] && b[i+1][j-1])
                {
                    b[i][j]=true;
                    if(k>l)
                    {
                        l=k;
                        a=i;
                    }
                }
                
            }
        }
        
        string t="";
        for(int i=a;i<a+l;i++)
        {
            t+=s[i];
        }
        return t;
    }
};

int main()
{
    string s;
    cout<<"Enter the input:\n";
    cin>>s;

    Solution S1;
    cout<<"Longest Palindromic Substring: "<<S1.longestPalindrome(s)<<endl;

    return 0;
}
