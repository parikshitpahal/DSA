class Solution {
public:
    int grp(vector<vector<char>>& board, string& word,int i,int j,int idx,vector<vector<int>>& vis,int pre){
        if(idx==word.size())return 1;
        if(i==board.size() || j==board[0].size() || i<0 || j<0){
            return 0;
        }
        int mn=0;
        if(vis[i][j]==1)return 0;
        if(pre==1 && board[i][j]==word[idx]){
            vis[i][j]=1;
            mn=max(mn,grp(board,word,i+1,j,idx+1,vis,1));
            mn=max(mn,grp(board,word,i-1,j,idx+1,vis,1));
            mn=max(mn,grp(board,word,i,j+1,idx+1,vis,1));
            mn=max(mn,grp(board,word,i,j-1,idx+1,vis,1));
            vis[i][j]=0;
        }   
        return mn;
    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<int>>vis(board.size(),vector<int>(board[0].size(),0));
        int ns=0;
        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[0].size(); j++) {
                if(board[i][j] == word[0]) {
                    ns=max(ns,grp(board,word,i,j,0,vis,1));
                }
            }
        }
        return ns==1;
    }
};