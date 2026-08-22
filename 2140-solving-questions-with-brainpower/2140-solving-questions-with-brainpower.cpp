class Solution {
public:
    long long dp(int i,vector<vector<int>>& q,vector<long long>& vis, int sk){
        if(i==q.size())return 0;
        if(sk>0)return dp(i+1,q,vis,sk-1);
        if(vis[i]!=-1)return vis[i];
        long long tk=q[i][0]+dp(i+1,q,vis,q[i][1]);
        long long ntk=dp(i+1,q,vis,0);
        return vis[i]=max(tk,ntk);
    }

    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long>vis(questions.size(),-1);
        return dp(0,questions,vis,0);
    }
};