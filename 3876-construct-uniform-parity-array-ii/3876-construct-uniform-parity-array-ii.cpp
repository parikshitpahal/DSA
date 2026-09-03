class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int fl=INT_MAX;
        for(auto it: nums1){
            if(it%2!=0)fl=min(fl,it);
        }

        if(fl==INT_MAX)return true;
        for(auto it:nums1){
            if(it%2==0){
                if(it-fl>=1)continue;
                else return false;
            }
        }
        return true;
    }
};