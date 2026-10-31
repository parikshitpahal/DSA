class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int xr=0;
        if(nums2.size()%2!=0){
            for(auto it:nums1)xr^=it;
        }
        if(nums1.size()%2!=0){
            for(auto it: nums2)xr^=it;
        }
        return xr;
    }
};