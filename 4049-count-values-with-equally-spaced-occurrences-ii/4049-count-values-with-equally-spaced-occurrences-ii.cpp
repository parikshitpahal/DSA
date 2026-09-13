class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>cnt;

        int c=0;
        set<int>st;
        for(int i=0;i<nums.size();i++){
            cnt[nums[i]].push_back(i);
            st.insert(nums[i]);
        }
        for(auto it:st){
            if(cnt[it].size()<3)continue;
            int fl=0;
            int df=cnt[it][1]-cnt[it][0];
            for(int i=2;i<cnt[it].size();i++){
                if(df!=cnt[it][i]-cnt[it][i-1]){
                    fl=1;
                    break;
                }
            }
            if(fl==0)c++;
        }
        return c;

    }
};