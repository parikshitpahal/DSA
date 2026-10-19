class Solution {
public:
    vector<vector<bool>> mp;
    int ii=0;
    int jj=0;
    void dp(int i,int j,vector<vector<char>>& grid,int x,int y){
        if(x<0 || y<0)return;
        if(grid.size()<=x || y>=grid[0].size())return ;
        if(!mp[x][y]){
            mp[x][y]=true;
            ii=x;
            jj=y;
 
        }
        else {
            return;
        }
        
        if(grid[i][j]=='R'){
            dp(x,y+1,grid,x,y+1);
        }
        else if(grid[i][j]=='U'){
            dp(x-1,y,grid,x-1,y);
        }
        else if(grid[i][j]=='L'){
            dp(x,y-1,grid,x,y-1);
        }
        else if(grid[i][j]=='D'){
           dp(x+1,y,grid,x+1,y);
        }
        return;
    }
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        mp = vector<vector<bool>>(grid.size(), vector<bool>(grid[0].size(), false));
        dp(0,0,grid,0,0);
        return {ii,jj};
    }
};