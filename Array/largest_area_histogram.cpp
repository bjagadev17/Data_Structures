#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
       stack<int> s;
       int m = 0, a = 0, i = 0;
       
       while(i<heights.size()){
           if(s.empty() || heights[s.top()]<=heights[i])
           {
               s.push(i++);
           }
           else{
               int k = s.top();
               s.pop();
               a = heights[k]*(s.empty() ? i : i - s.top()-1);
               m = max(m,a);
           }
       }
       
       while(!s.empty())
       {
           int k = s.top();
           s.pop();
           a = heights[k]*(s.empty() ? i : i - s.top()-1);
           m = max(m,a);
       }
        
       return m;
    }
};