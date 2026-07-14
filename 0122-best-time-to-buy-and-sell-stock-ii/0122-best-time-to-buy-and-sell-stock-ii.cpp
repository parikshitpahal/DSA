class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int pre=nums[0];
        int mn=nums[0];
        int mx=nums[0];
        int ans=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<pre){
                mn=nums[i];
                mx=nums[i];
            }
            else if(mn>nums[i])mn=nums[i];
            else if(mx<nums[i])mx=nums[i];
            pre=nums[i];
            if(mx>mn){
                ans+=mx-mn;
                mn=nums[i];
                mx=nums[i];
            }
        }
        return ans;
    }
};