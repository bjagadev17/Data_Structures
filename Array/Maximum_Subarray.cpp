#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int curr_max = a[0];
        int max_so_far = a[0];
        
        for(int i=1;i<a.size();i++)
        {
            curr_max = max(a[i],curr_max+a[i]);
            max_so_far = max(max_so_far,curr_max);
        }
        
        return max_so_far;
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

    cout<<"Maximum Subarray Sum: "<<s1.maxSubArray(v)<<endl;


    return 0;
}