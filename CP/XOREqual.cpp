#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define M 1000000007;


ull xorEqual(int N)
{
    ull c = 1;
    if(N==1)
    {
        return c;
    }
    else
    {
        N--;
        ull a = 2;
        while(N>0)
        {
            if(N&1)
            {
                c = c*a%M;
            }
            a = a*a%M;
            N>>=1;
        }
    }
    return c;
} 

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N;
        cin>>N;

        cout<<xorEqual(N)<<endl;
    }
}