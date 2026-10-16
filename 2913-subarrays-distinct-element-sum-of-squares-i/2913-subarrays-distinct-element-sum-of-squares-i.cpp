class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int dis=0;
        int hash[101]={-1};
        for(auto it:nums){
            if(hash[it]==-1)dis++;
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            unordered_map<int,int>mp;
            for(int j=i;j<nums.size();j++){
                mp[nums[j]]++;
                ans+=mp.size()*mp.size();
            }
        }
        return ans;
    }
};