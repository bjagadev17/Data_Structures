#include<bits/stdc++.h>
using namespace std;


int cntSum(int N,int D,int X)
{
    long long a = pow(10,N-1);
    long long b = pow(10,N)-1;

    long long s = 0;
    long long f_t;

    for(int i=a;i<a+D;i++)
    {
          if(i%D==X)
          {
              f_t = i;
              break;
          }
    }

    long long n_t = (((b)-f_t)/D)+1;
    s = (n_t*((2*f_t)+(n_t-1)*D))/2;

    return s%1000000007;
}

int main()
{
    int N;
    cin>>N;
    int D;
    cin>>D;
    int X;
    cin>>X;

    int res = cntSum(N,D,X);
    cout<<res<<endl;
    return 0;
}