#include<bits/stdc++.h>
using namespace std;
//pacific atlantic water flow

class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) {
        
        vector<vector<int>>ans;
        if(matrix.size()<1)return ans;
        vector<vector<int>>pacific(matrix.size(),vector<int>(matrix[0].size(),0));
        vector<vector<int>>atlantic(matrix.size(),vector<int>(matrix[0].size(),0));
        
        for(int col=0;col<matrix[0].size();col++)
        {
            fnc(matrix,0,col,INT_MIN,pacific);
            fnc(matrix,matrix.size()-1,col,INT_MIN,atlantic);
            
        }
        
        for(int row = 0;row<matrix.size();row++)
        {
            fnc(matrix,row,0,INT_MIN,pacific);
            fnc(matrix,row,matrix[0].size()-1,INT_MIN,atlantic);
        }
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(pacific[i][j]==1 && atlantic[i][j]==1)
                {
                    vector<int>v(2);
                    v[0]=i;
                    v[1]=j;
                    ans.push_back(v);
                }
            }
        }
        
        
        
        return ans;
    }
    
    void fnc(vector<vector<int>>& matrix,int i, int j,int prev,vector<vector<int>>& ocean)
    {
        if(i<0 || j<0 || i>=matrix.size() || j>=matrix[0].size())
            return;
        if(ocean[i][j]==1)
            return;
        if(matrix[i][j]<prev)
            return;
        
        ocean[i][j]=1;
        
        fnc(matrix,i+1,j,matrix[i][j],ocean); 
        fnc(matrix,i-1,j,matrix[i][j],ocean);
        fnc(matrix,i,j+1,matrix[i][j],ocean);
        fnc(matrix,i,j-1,matrix[i][j],ocean);
        
        
        
        
        
    }
};