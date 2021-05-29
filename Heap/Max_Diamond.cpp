#include<bits/stdc++.h>
using namespace std;

int max_Diamond(int a[], int n, int k)
{
    priority_queue <int> pq;

    for(int i=0;i<n;i++)
    {
        pq.push(a[i]);
    }

    int m = 0;

    while(k--)
    {
        int c = pq.top();
        pq.pop();

        m+=c;

        c = c/2;

        pq.push(c);

    }

    return m;
}

int main()
{
    int n,k;
    cout<<"Enter the size:\n";
    cin>>n;

    int a[n];

    cout<<"Enter the elements of the array:\n";

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the value of k:\n";
    cin>>k;

    cout<<max_Diamond(a,n,k)<<endl;

    return 0;
}