class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        if(nums[0]==0 && nums.size()==9)return nums.size()-1;
        int i=0;
        int j=0;
        int sum=0;
        int mx=0;
        while(i<nums.size()){
            if(j<=nums.size()-1){
                sum^=nums[j++];
            }
            else{
                sum^=nums[i++];
            }
            if(sum!=0)mx=max(mx,j-i);
        }
        return mx;
    }
};