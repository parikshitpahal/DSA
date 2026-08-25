class Solution {
public:
    
    void dfs(int j,vector<int>& vis,vector<vector<int>>adj){
        vis[j]=1;
        for(int i=0;i<adj[j].size();i++){
            if(vis[adj[j][i]]!=1){
                dfs(adj[j][i],vis,adj);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& mat) {
        vector<vector<int>>adj(mat.size());
        vector<int>vis(mat.size(),0);

        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1)adj[i].push_back(j);
            }
        }

        int c=0;
        for(int j=0;j<adj.size();j++){

                if(vis[j]!=1){
                    c++;
                    dfs(j,vis,adj);
                }
        }    
        
        return c;
    }
};