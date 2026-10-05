class Solution {
public:
    int minRotations(int n, string s) {
        vector<int>nums;
        for(auto it:s){
            nums.push_back(it-'0');
        }
        int ans=0;
        int pre=0;
        for(auto it:nums){
            ans+=min(abs(pre-it),10-abs(pre-it));
            pre=it;
        }
        int tmp=0;
        pre=0;
        for(int i=nums.size()-1;i>=0;i--){
            int it=nums[i];
            tmp+=min(abs(pre-it),10-abs(pre-it));
            pre=it;
        }
        ans=min(ans,tmp);
        pre=nums[nums.size()-1];
        vector<int>pr;
        pr.push_back(0);
        tmp=0;
        for(int i=nums.size()-2;i>=0;i--){
            int it=nums[i];
            tmp+=min(abs(pre-it),10-abs(pre-it));
            pre=it;
            pr.push_back(tmp);
        }
        reverse(pr.begin(),pr.end());
        int sm=0;
        int pp=0;
        for(int i=0;i<nums.size()-1;i++){
            sm+=min(abs(nums[i]-pp),10-abs(nums[i]-pp));
            int x=sm+pr[i+1]+min(abs(nums[i]-nums[nums.size()-1]),10-abs(nums[i]-nums[nums.size()-1]));
            pp=nums[i];
            ans=min(ans,x);
        }
        return ans;
    }
};