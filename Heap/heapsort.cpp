#include<bits/stdc++.h>
using namespace std;

void heapify(int a[],int k,int i)
{
    int l=2*i+1;
    int r=2*i+2;
    int s=i;

    if(l<k && a[l]>a[s])
    {
        s=l;
    }
    if(r<k && a[r]>a[s])
    {
        s=r;
    }
    if(s!=i)
    {
        swap(a[i],a[s]);
        heapify(a,k,s);
    }
}

void heapsort(int a[],int n)
{
    for(int i=(n-1)/2;i>=0;i--)
    {
        heapify(a,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
         swap(a[0],a[i]);
         heapify(a,i,1);
    }
}

int main()
{
    int n;
    cout<<"Enter the dimensions :";
    cin>>n;

    int a[n];

    cout<<"Enter n numbers seperated by spaces \n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }


    heapsort(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
