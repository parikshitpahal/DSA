
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int ct=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ct){
                c++;
            }
            else if( c==0){
                ct=nums[i];
                c=1;
            }
            else{
                c--;
            }
        }
        int z=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ct){
                z++;
            }
        }
        if(z>nums.size()/2){
            return ct;
        }

        return -1;
    }
};