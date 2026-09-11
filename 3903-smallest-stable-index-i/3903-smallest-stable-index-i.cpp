class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans=0;
        vector<int>pre;
        vector<int>post;
        pre.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(pre.back()<nums[i]){
                pre.push_back(nums[i]);
            }
            else pre.push_back(pre.back());
        }
        post.push_back(nums[nums.size()-1]);
        for(int i=nums.size()-2;i>=0;i--){
            if(post.back()>nums[i])post.push_back(nums[i]);
            else post.push_back(post.back());
        }
        reverse(post.begin(),post.end());

        for(int i=0;i<pre.size();i++){
            if(pre[i]-post[i]<=k)return i;
        }
        return ans==0?-1:ans;
    }
};