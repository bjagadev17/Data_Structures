#include<bits/stdc++.h>
using namespace std;

string validPath(int a, int b, int c, int d, int k)
{
    int p = abs(c-a)+abs(d-b);
    if(p>k)
    {
        return "NO";
    }
    k = k-p;
    if(k&1)
    {
        return "NO";
    }
    return "YES";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;

        cout<<validPath(a,b,c,d,k)<<endl;
    }

    return 0;
}