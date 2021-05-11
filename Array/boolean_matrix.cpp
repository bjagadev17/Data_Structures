#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool frow = false;
        bool fcol = false;
        
        for(int j=0;j<matrix.size();j++)
        {
            if(!matrix[j][0])
            {
                fcol = true;
                break;
            }
        }
        
        for(int j=0;j<matrix[0].size();j++)
        {
            if(!matrix[0][j])
            {
                frow = true;
                break;
            }
        }
        
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[0].size();j++)
            {
                if(!matrix[i][j])
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
                
            }
        }
        
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[0].size();j++)
            {
                if(!matrix[i][0] || !matrix[0][j])
                {
                    matrix[i][j] = 0;
                }
                
            }
        }
        
        if(frow)
        {
            for(int i=0;i<matrix[0].size();i++)
            {
                matrix[0][i] = 0;
            }
        }
        
        if(fcol)
        {
            for(int i=0;i<matrix.size();i++)
            {
                matrix[i][0] = 0;
            }
        }
        
    }
};