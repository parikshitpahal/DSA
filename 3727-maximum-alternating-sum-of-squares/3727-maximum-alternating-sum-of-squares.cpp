class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int odd=nums.size()/2;
        int sz=nums.size()-odd;
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.rbegin(),nums.rend());
        long long ans=0;
        for(int i=0;i<sz;i++)ans+=1ll*(nums[i]*nums[i]);
        for(int i=sz;i<nums.size();i++)ans-=1ll*(nums[i]*nums[i]);
        return ans;
    }
};