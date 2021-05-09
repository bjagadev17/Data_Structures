#include<bits/stdc++.h>
using namespace std;

int maxSolubility(int X, int A, int B)
{
    return (A+(100-X)*B)*10;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int X,A,B;
        cin>>X>>A>>B;
        
        cout<<maxSolubility(X,A,B)<<endl;
    }
    
    return 0;
}