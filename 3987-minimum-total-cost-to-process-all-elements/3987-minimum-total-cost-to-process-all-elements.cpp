class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        __int128 n=0;
        int i=0;
        int tmp=k;
        int MOD=1e9+7;
        while(i<nums.size()){
            if(nums[i]<=k){

                k-=nums[i];
                i++;
            }
            else{
                if((nums[i]-k)/tmp==0){
                    n+=1+(nums[i]-k)/tmp;
                    k+=tmp*(1+(nums[i]-k)/tmp);
                }
                else{
                    n+=(nums[i]-k)/tmp;
                    k+=tmp*((nums[i]-k)/tmp);
                }
            }
        }
        
        __int128 ans=(n*(n+1))/2;
        return ans%MOD;
    }
};