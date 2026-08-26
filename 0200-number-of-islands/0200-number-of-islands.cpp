class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>&  vis,vector<vector<char>>& grid){
        if(i==grid.size()|| j==grid[0].size())return ;
        if(i<0 || j<0)return ;
        if(vis[i][j]==1)return ;
        if(grid[i][j]=='0')return ;
        vis[i][j]=1;
        dfs(i+1,j,vis,grid);
        dfs(i,j+1,vis,grid);
        dfs(i,j-1,vis,grid);  
        dfs(i-1,j,vis,grid);    
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        int c=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(vis[i][j]==0 && grid[i][j]=='1'){
                    c++;
                    dfs(i,j,vis,grid);
                }
            }
        }
        return c;
    }
};