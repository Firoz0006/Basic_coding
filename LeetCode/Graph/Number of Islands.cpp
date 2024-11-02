#include<bits/stdc++.h>
using namespace std;
//Number of islands

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == '1'){
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
    }
    void dfs(vector<vector<char>>& grid,int i,int j){
        if(i<0 || j<0 || i == grid.size() || j == grid[0].size())
            return;
        if(grid[i][j] != '1')
            return;
        else
            grid[i][j] = '2';
        dfs(grid,i-1,j);
        dfs(grid,i+1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
};
int main(){
    Solution obj;
    vector<vector<char>> grid={{'1','1','0','0','0'},{'1','1','0','0','0'},{'0','0','1','0','0'},{'0','0','0','1','1'}};
    cout<<obj.numIslands(grid);
    return 0;
}