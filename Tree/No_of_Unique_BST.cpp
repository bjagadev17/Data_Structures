#include<bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int numTrees(int n) {
        if(n==0 || n==1)
        {
            return 1;
        }
        else
        {
            long long a[n+1];
            a[0]=1;
            a[1]=1;
            
            for(int i=2;i<=n;i++)
            {
                a[i]=0;
                for(int j=0;j<i;j++)
                {
                    a[i]+=a[j]*a[i-j-1];
                }
            }
            return a[n];
        }
    }
};

int main()
{
    int n;
    cout<<"Enter the number of nodes in tree"<<endl;
    cin>>n;

    Solution s;
    long long distinct_tree=s.numTrees(n);

    cout<<"The distinct tree possible is : "<<distinct_tree<<endl;
    return 0;
}
