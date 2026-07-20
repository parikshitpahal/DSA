class Solution {
public:
    

    int dp(int i,int j,int ei,int ej,vector<vector<int>>& vis,int c){
        if(i>=8 || i<0 ||j>=8 ||j<0)return 0;
        if(i==ei && j==ej && c%2==0)return 1;
        if(vis[i][j]!=-1)return vis[i][j];
        vis[i][j]=0;
        int on=dp(i-1,j-2,ei,ej,vis,c+1);
        int tw=max(on,dp(i+1,j-2,ei,ej,vis,c+1));
        int thr=max(tw,dp(i-2,j-1,ei,ej,vis,c+1));
        int fr=max(thr,dp(i-2,j+1,ei,ej,vis,c+1));
        int fv=max(fr,dp(i-1,j+2,ei,ej,vis,c+1));
        int sx=max(fv,dp(i+1,j+2,ei,ej,vis,c+1));
        int sv=max(sx,dp(i+2,j-1,ei,ej,vis,c+1));
        int eg=max(sv,dp(i+2,j+1,ei,ej,vis,c+1));
        return vis[i][j]=eg;
    }
    bool canReach(vector<int>& start, vector<int>& target) {
        vector<vector<int>>vis(8,vector<int>(8,-1));
        return dp(start[0],start[1],target[0],target[1],vis,0)==1;
    }
};