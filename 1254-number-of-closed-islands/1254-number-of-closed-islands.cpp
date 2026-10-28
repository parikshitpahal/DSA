class Solution {
public:
    int grp(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& vis){
        if(grid[i][j]==1)return 0;
        if(vis[i][j]==1)return 0;
        if(i==0 || j==0 || i==grid.size()-1 || j==grid[0].size()-1){
           
            return 1;
        }
        
        
        vis[i][j]=1;
        int lft=grp(i,j-1,grid,vis);
        int rgt=grp(i,j+1,grid,vis);
        int up=grp(i-1,j,grid,vis);
        int dwn=grp(i+1,j,grid,vis);
        return max(lft,max(up,max(rgt,dwn)));
    }

    int closedIsland(vector<vector<int>>& grid) {
        int ans=0;
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),-1));
        for(int i=1;i<grid.size()-1;i++){
            for(int j=1;j<grid[0].size()-1;j++){
                if(grid[i][j]==0 && vis[i][j]==-1){
                    if(grp(i,j,grid,vis)==0){
                        ans++; 
                    }cout<<i<<" "<<j<<endl;
                }
            }
        }
        return ans;
    }
};