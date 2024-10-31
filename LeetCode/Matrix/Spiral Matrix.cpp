#include<bits/stdc++.h>
using namespace std;
//spiral matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        int row=mat.size(),col=mat[0].size(),total=row*col,count=0;
        int sr=0,er=row-1,sc=0,ec=col-1;//sr=starting row ,sc=,starting col
        while(count<total){
            for(int i=sc;count<total && i<= ec;i++){
                ans.push_back(mat[sr][i]);
                count++;
            }
            sr++;
            for(int i=sr;count<total && i<=er;i++){
                ans.push_back(mat[i][ec]);
                count++;
            }
            ec--;
            for(int i=ec;count<total && i>= sc;i--){
                ans.push_back(mat[er][i]);
                count++;
            }
            er--;
            for(int i=er;count<total && i>=sr;i--){
                ans.push_back(mat[i][sc]);
                count++;
            }
            sc++;
        }
        return ans;
        
    }
};

int main(){
    vector<vector<int>>mat={{1,2,3},{4,5,6},{7,8,9}};
    Solution obj;
    vector<int>ans=obj.spiralOrder(mat);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}