class Solution {
public:
    long long grp(int i,int j,vector<vector<int>>& grid, vector<vector<int>>& vis){
        if(i<0 || j<0 || i==grid.size() || j==grid[0].size())return 0;
        if(grid[i][j]==0)return 0;
        if(vis[i][j]==1)return 0;
        vis[i][j]=1;
        long long up=grp(i-1,j,grid,vis);
        long long dwn=grp(i+1,j,grid,vis);
        long long lft=grp(i,j-1,grid,vis);
        long long rgt=grp(i,j+1,grid,vis);
        return up+dwn+rgt+lft+grid[i][j];
    }


    int countIslands(vector<vector<int>>& grid, int k) {
        int ans=0;
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),-1));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]!=0 && vis[i][j]!=1){ 
                    long long sm=grp(i,j,grid,vis);
                    if(sm%k==0)ans++;
                }
            }
        }
        return ans;
    }
};