#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int segregate(vector<int>& a, int n)
    {
        int j = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=0)
            {
                swap(a[i],a[j]);
                j++;
            }
        }
        return j;
        
    }
    
    int firstMissingPositive(vector<int>& a) {
        int n = a.size();
        
        int k = segregate(a,n);
        
        
        vector<int> v;
        for(int i=k;i<a.size();i++)
        {
            v.push_back(a[i]);
        }
        
        
        for(int i=0;i<v.size();i++)
        {
            if((abs(v[i])-1)<v.size() && v[abs(v[i])-1]>0)
            {
                v[abs(v[i])-1]*=-1;
            }
        }
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>0)
            {
                return i+1;
            }
        }
        return v.size()+1;
        
    }
};

int main()
{
    int n;
    cout<<"Enter the size of the list: ";
    cin>>n;

    vector<int> v;
    cout<<"Enter the elements in the list: "<<endl;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        v.push_back(p);
    }

    Solution s1;

    cout<<"First Missing Positive Number: "<<s1.firstMissingPositive(v)<<endl;


    return 0;
}