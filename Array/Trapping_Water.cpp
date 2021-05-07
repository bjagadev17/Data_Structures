#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& h) {
        vector<int> lh;
        vector<int> rh;
        
        int m = -1;
        for(int i = 0;i<h.size();i++)
        {
            m = max(m,h[i]);
            lh.push_back(m);
        }
        
        m = -1;
        for(int i = h.size()-1;i>=0;i--)
        {
            m = max(m,h[i]);
            rh.push_back(m);
        }
        
        reverse(rh.begin(),rh.end());
        
        int t = 0;
        
        for(int i = 0;i<h.size();i++)
        {
            t+=(min(lh[i],rh[i])-h[i]);
        }
        
        return t;
    }
};

int main()
{
    int n;
    cout<<"Enter the total number of building: ";
    cin>>n;

    vector<int> v;
    cout<<"Enter the height of each building: "<<endl;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        v.push_back(p);
    }

    Solution s1;

    cout<<"Total Water trapped between building: "<<s1.trap(v)<<endl;


    return 0;
}