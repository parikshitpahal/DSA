class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int mn=0;
            ans+=abs(nums[i]-nums[nums.size()-1]);
        }
        return ans;
    }
};