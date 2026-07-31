class Solution {
public:
    int dp(int i,vector<int>& nums,vector<int>& vis){
        if(i>=nums.size()-1)return 0;
        if(nums[i]==0)return 11111;
        if(vis[i]!=0)return vis[i];
        int mn=11111;
        for(int j=1;j<=nums[i];j++){
            mn=min(mn,1+dp(j+i,nums,vis));
        }
        return vis[i]=mn;
    }
    int jump(vector<int>& nums) {
        vector<int>vis(nums.size(),0);
        return dp(0,nums,vis);
    }
};