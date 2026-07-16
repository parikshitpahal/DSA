class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int mx=0;
        for(int i=0;i<nums.size();i++){
            if(i!=0 && nums[i]==nums[i-1])continue;
            if(st.find(nums[i]-1)==st.end()){
                int c=1;
                int j=1;
                while(st.find(nums[i]+j++)!=st.end())c++;
                mx=max(mx,c);
            }
        }
        return mx;
    }
};