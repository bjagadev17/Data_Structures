#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
        {
            return s;
        }
        string a[numRows];
        bool b =true;
        int n=0;
        
        for(int i=0;i<s.length();i++)
        {
            a[n].push_back(s[i]);
            
            if(n==numRows-1)
            {
                b=false;
            }
            if(n==0)
            {
                b=true;
            }
            
            n = b ? n+1 : n-1;
        }
        
        string t = "";
        
        for(int i=0;i<numRows;i++)
        {
            t+=a[i];
        }
        return t;
        
    }
};

int main()
{
    string s;
    cin>>s;
    int r;
    cin>>r;
    Solution s1;
    cout<<"Zig-Zag Conversion : "<<s1.convert(s,r);
    return 0;
}