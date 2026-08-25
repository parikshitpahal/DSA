class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]=1;
        }
        for(int i=1;i<102;i++){
            if(mp.find(k*i)==mp.end())return k*i;
        }
        return -1;
    }
};