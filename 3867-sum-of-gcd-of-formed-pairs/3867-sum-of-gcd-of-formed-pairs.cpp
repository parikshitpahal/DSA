class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>prefix(nums.size(),0);
        prefix[0]=nums[0];
        int mx=nums[0];
        for(int i=1;i<nums.size();i++){
            mx=max(nums[i],mx);
            prefix[i]=gcd(nums[i],mx);
            
        }
        sort(prefix.begin(),prefix.end());
        int i=0,j=nums.size()-1;
        long long sum=0;
        while(i<j){
            sum+=gcd(prefix[i++],prefix[j--]);
        }
        return sum;
    }
};