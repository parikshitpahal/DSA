class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        long long sm=0;
        vector<int>tmp;
        for(auto it:nums)sm+=it;
        for(auto it:nums)tmp.push_back(it);
        for(auto it:nums)tmp.push_back(it);
        int ans=0;
        long long x=0;
        int j;
        for(j=0;j<nums.size()/2;j++){
            x+=tmp[j];
        }
        for(int i=0;i<nums.size();i++){
            if(sm-x<x)ans++;
            x-=nums[i];
            x+=tmp[j++];
        }
        return ans;
    }
};