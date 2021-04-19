#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int strStr(string a, string b) {
        
        if(a.find(b)!=-1)
        {
            return a.find(b);
        }
        return -1;
    }
};

int main()
{
    string a,b;
    cout<<"Please Enter two strings:"<<endl;
    cin>>a>>b;

    Solution s1;
    cout<<s1.strStr(a,b)<<endl;
    return 0;
}