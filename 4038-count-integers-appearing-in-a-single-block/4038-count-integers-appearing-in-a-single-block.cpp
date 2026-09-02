class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        if(nums.size()==1)return 1;
        int hash[102]={0};
        int ans=0;
        for(auto it:nums)hash[it]++;
        for(int i=0;i<101;i++){
            if(hash[i]==1)ans++;
        }
        int pre=nums[0];
        int fl=0;
        int c=1;
        for(int i=1;i<nums.size();i++){

            if(nums[i]==pre ){
                if(c+1==hash[nums[i]]){
                    ans++;
                }
                c++;
            }
            else c=1;
            pre=nums[i];
        }
        return ans;
    }
};