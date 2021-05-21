#include<bits/stdc++.h>
using namespace std;

#define ll long long


ll countPair(int N, int M)
{
    ll c = 0;
    vector<ll> a(N+1,1);
    ll p;

    for(int i=2;i<=N;i++)
    {
         p = M%i;
         c += a[p];

         for(int j=p;j<=N;j+=i)
         {
             a[j]++;
         }
    }
    return c;
    
}


int main()
{
    int t;
    cin>>t;

    while(t--){
        int N, M;
        cin>>N>>M;
        cout<<countPair(N,M)<<endl;
    }
    
    return 0;
}