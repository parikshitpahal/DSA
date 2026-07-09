class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> nums1 (nums.begin(),nums.end());
        sort(nums1.begin(),nums1.end());
        int i=0;
        int j=nums.size()-1;
        vector<int> v;
        while(i<=j){
            if(nums1[i]+nums1[j]==target){
                for(int k=0;k<nums.size();k++){
                    if(nums[k]==nums1[i]){
                        v.push_back(k);
                    }
                    else if(nums[k]==nums1[j]){
                        v.push_back(k);
                    }
                }
                return v;
            }

            else if(nums1[i]+nums1[j]>target){
                j--;
            }

            else i++;
        }
        return v;
    }
    
 
};