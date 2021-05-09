#include<bits/stdc++.h>
using namespace std;

string golf(int N, int x, int k)
{
     if((x%k==0) || ((N+1-x)%k==0))
     {
         return "YES";
     }

     return "NO";
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int N,x,k;
        cin>>N>>x>>k;

        cout<<golf(N,x,k)<<endl;
        
    }
    
    return 0;
}