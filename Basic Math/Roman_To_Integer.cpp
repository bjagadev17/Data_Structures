#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        if(s.length()==0)
        {
            return 0;
        }
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='I')
            {
                if(i!=s.length()-1 && s[i+1]=='V')
                {
                    c+=4;
                    i++;
                }
                else if(i!=s.length()-1 && s[i+1]=='X')
                {
                    c+=9;
                    i++;
                }
                else
                {
                   c+=1; 
                }
                
            }
            else if(s[i]=='V')
            {
                c+=5;
            }
            else if(s[i]=='X')
            {
                if(i!=s.length()-1 && s[i+1]=='L')
                {
                    c+=40;
                    i++;
                }
                else if(i!=s.length()-1 && s[i+1]=='C')
                {
                    c+=90;
                    i++;
                }
                else
                {
                    c+=10;
                }
            }
            else if(s[i]=='L')
            {
                c+=50;
            }
            else if(s[i]=='C')
            {
                 if(i!=s.length()-1 && s[i+1]=='D')
                {
                    c+=400;
                    i++;
                }
                else if(i!=s.length()-1 && s[i+1]=='M')
                {
                    c+=900;
                    i++;
                }
                else
                {
                    c+=100;
                }
            }
            else if(s[i]=='D')
            {
                c+=500;
            }
            else
            {
                c+=1000;
            }
        }
        return c;
    }
};

int main()
{
    string s;
    cout<<"Enter Number in Roman Form"<<endl;
    cin>>s;
    
    Solution s1;

    cout<<"Number : "<<s1.romanToInt(s)<<endl;
    return 0;
}