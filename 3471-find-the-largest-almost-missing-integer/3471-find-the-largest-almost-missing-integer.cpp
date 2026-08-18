class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        int hash[51]={0};
        int mx=-1;
        for(int i=0;i<=n-k;i++){
            int shash[51]={0};
            for(int j=i;j<i+k;j++){
                shash[nums[j]]++;
                hash[nums[j]]++;
                if(hash[nums[j]]!=shash[nums[j]])hash[nums[j]]=-99;
            }
        }
        for(int i=50;i>=0;i--){
            if(hash[i]>0)return i;
        }
        return -1;
    }
};