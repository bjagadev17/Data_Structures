#include<bits/stdc++.h>
using namespace std;

int rating (int a[], int n, int k)
{
    int i,j;
    for(int i=1;i<n;i++)
    {
        int p=a[i];
        j=i-1;
        while(j>=0 && p<a[j] && ((p^a[j])&1))
        {
            a[j+1]=a[j];
            a[j]=p;
            j--;
        }
    }

    int c=0;
    i=0;
    while(k)
    {
        c+=(a[i]*k);
        i++;
        k--;
    }
    


    return c;
}

int main()
{
    int n,k;
    cout<<"Enter the no of contestant:"<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter the ratings of contestant:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the value of k:";
    cin>>k;

    cout<<rating(a,n,k)<<endl;

    return 0;

}