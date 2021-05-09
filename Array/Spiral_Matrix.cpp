#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> a;
        int m = matrix.size();
        if(m==0)
        {
            return a;
        }
        int n = matrix[0].size();
        
        int row=0, col=0;
        
        while(row<m && col<n)
        {
            for(int i=col;i<n;i++)
            {
                a.push_back(matrix[row][i]);
            }
            row++;
            
            for(int i=row;i<m;i++)
            {
                a.push_back(matrix[i][n-1]);
            }
            n--;
            
            if(row<m)
            {
                for(int i=n-1;i>=col;i--)
                {
                    a.push_back(matrix[m-1][i]);
                }
                m--;
            }
            if(col<n)
            {
                for(int i=m-1;i>=row;i--)
                {
                    a.push_back(matrix[i][col]);
                }
                col++;
            }
        }
        
        return a;
    }
};