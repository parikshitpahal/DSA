class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        vector<vector<int>>cnt(101);
        int hash[101]={0};
        int c=0;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
            cnt[nums[i]].push_back(i);
            // if(hash[nums[i]]==3){
            //     int x=cnt[nums[i]][0];
            //     int y=cnt[nums[i]][1];
            //     int z=cnt[nums[i]][2];
            //     if(y-x==z-y)c++;
            // }
        }
        for(int i=0;i<nums.size();i++){
            if(hash[nums[i]]==3){
                int x=cnt[nums[i]][0];
                int y=cnt[nums[i]][1];
                int z=cnt[nums[i]][2];
                if(y-x==z-y)c++;
                hash[nums[i]]=10001;
            }
        }
        return c;
    }
};