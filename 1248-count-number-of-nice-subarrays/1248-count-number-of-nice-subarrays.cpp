class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0)v.push_back(1);
            else v.push_back(0);
        }
        int ans=0;
        int ct=0;
        int i=0;
        int j=0;
        while(j<nums.size()){
            if(nums[j]%2!=0)ct++;
            
            while(k<ct){
                if(nums[i]%2!=0)ct--;
                i++;
            }
            
            if(k==ct){
                int lf=i;
                while(v[lf]!=1)lf++;
                ans+=lf-i+1;
            }
            j++;
        }
        return ans;
    }
};