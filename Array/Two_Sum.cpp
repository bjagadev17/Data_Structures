#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
        vector <int> v;
        unordered_map<int,int> m;
        
        for(int i=0;i<a.size();i++)
        {
            if(m.find(k-a[i])!=m.end())
            {
                v.push_back(m[k-a[i]]);
                v.push_back(i);
                break;
            }
            m[a[i]]=i;
        }
        return v;
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

    int s;

    cout<<"Enter Target Sum: "<<endl;
    cin>>s;

    Solution s1;
    vector<int> p = s1.twoSum(v,s);

    for(int i=0;i<p.size();i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;




    return 0;
}