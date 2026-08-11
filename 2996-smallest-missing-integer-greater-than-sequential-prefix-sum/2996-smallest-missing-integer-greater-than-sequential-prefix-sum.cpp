class Solution {
public:
    int missingInteger(vector<int>& nums) {
        if(nums.size()==1)return nums[0]+1;
        int pre=nums[0];
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
                pre=max(pre,sum);
            }
            else break;
        }
        int hash[5100]={0};
        for(auto it:nums){
            hash[it]=1;
        }
        for(int i=0;i<5000;i++){
            if(i>=pre && hash[i]==0)return i;
        }
        return 0;
    }
};