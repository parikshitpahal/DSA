class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int  mn=0;
        int mx=0;
        long long ans=0;
        int pre=0;
        for(int i=0;i<nums.size();i++){
            mn=nums[i];
            mx=nums[i];
            if(i!=0 && nums[i-1]>=minK && nums[i-1]<=maxK){
                if(pre>1)ans+=pre-1;
                pre--;
                continue;
            }
            pre=0;
            for(int j=i;j<nums.size();j++){
                mn=min(mn,nums[j]);
                mx=max(mx,nums[j]);
                if(mn>=minK && mx<=maxK){
                    ans++;
                    pre++;
                    // cout<<mn<< " "<<mx;
                }
                else break;
            }
        }
        return ans;
    }
};