#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector <vector<int>> a;
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        
        int start = intervals[0][0];
        int end = intervals[0][1];
        
        newInterval.clear();
        
        for(int i=1;i<intervals.size();i++)
        {
            if(end>=intervals[i][0])
            {
                end = max(end,intervals[i][1]);
            }
            else
            {
                newInterval.push_back(start);
                newInterval.push_back(end);
                
                a.push_back(newInterval);
                
                newInterval.clear();
                
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        
         newInterval.push_back(start);
         newInterval.push_back(end);
                
         a.push_back(newInterval);
        
        return a;
    }
};