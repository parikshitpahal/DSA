class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int pre=nums[0];
        int ans=0;
        for(int i=1;i<nums.size();i++){
            if((pre^nums[i])==0){
                ans++;
            }
            else pre=nums[i];
        }
        return ans;
    }
};