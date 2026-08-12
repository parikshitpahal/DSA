class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        vector<int>pre;
        pre.push_back(0);
        vector<int>post;
        post.push_back(0);
        for(int i=0;i<nums.size();i++){
            pre.push_back(pre.back()+nums[i]);
        }
        for(int i=nums.size()-1;i>=0;i--){
            post.push_back(post.back()+nums[i]);
        }
        
        int i=k;
        int j=0;
        int ans=0;
        while(i>=0){
            ans=max(ans,pre[i--]+post[j++]);
        }
        return ans;
    }
};