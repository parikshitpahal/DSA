class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sm=nums[nums.size()/2];
        
        vector<int>md;
        int mn=INT_MAX;

        for(int i=0;i<nums.size();i++){
            if(mn>=abs(nums[i]-sm)){
                mn=abs(nums[i]-sm);
                md.push_back(i);
            }
        }

        long long ans=INT_MAX;
        for(auto it:md){
            long long mn=0;
            for(int i=0;i<nums.size();i++){

                mn+=abs(nums[i]-nums[it]);
            }
            ans=min(mn,ans);
        }
        return ans;
    }
};