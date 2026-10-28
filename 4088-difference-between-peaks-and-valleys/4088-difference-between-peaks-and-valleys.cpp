class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int pk=0;
        int vl=0;
        int pre=nums[0];
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>pre && nums[i]>nums[i+1]){
                pk+=nums[i];cout<<i;}
            if(nums[i]<pre && nums[i]<nums[i+1])vl+=nums[i];
            pre=nums[i];
        }
        cout<<pk <<" "<<vl;
        return pk-vl;
    }
};