#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string c="0";
        string s;
        int i=a.length()-1,j=b.length()-1;
        while(i>=0 && j>=0)
        {
            if(c=="0")
            {
                if(a[i]=='1' && b[j]=='1')
                {
                    s.push_back('0');
                    c="1";
                }
                else if(a[i]=='1' || b[j]=='1')
                {
                    s.push_back('1');
                }
                else
                {
                    s.push_back('0');
                }
            }
            else
            {
                if(a[i]=='1' && b[j]=='1')
                {
                    s.push_back('1');
                    c="1";
                }
                else if(a[i]=='1' || b[j]=='1')
                {
                    s.push_back('0');
                    c="1";
                }
                else
                {
                    s.push_back('1');
                    c="0";
                }
            }
            i--;
            j--;
        }
        while(i>=0)
        {
            if(c=="0")
            {
                s.push_back(a[i]);
            }
            else
            {
                if(a[i]=='1')
                {
                    s.push_back('0');
                }
                else
                {
                    s.push_back('1');
                    c="0";
                }
            }
            i--;
        }
         while(j>=0)
        {
            if(c=="0")
            {
                s.push_back(b[j]);
            }
            else
            {
                if(b[j]=='1')
                {
                    s.push_back('0');
                }
                else
                {
                    s.push_back('1');
                    c="0";
                }
            }
            j--;
        }
        if(c=="1")
        {
            s.push_back('1');
        }
        reverse(s.begin(),s.end());
        return s;
        
        
    }
};

int main()
{
   string a,b;
   cout<<"Enter first input in binary form: "<<endl;
   cin>>a;
   cout<<"Enter second input in binary form: "<<endl;
   cin>>b;

   Solution s1;

   cout<<"After adding the number will be: "<<s1.addBinary(a,b)<<endl;

    return 0;
}