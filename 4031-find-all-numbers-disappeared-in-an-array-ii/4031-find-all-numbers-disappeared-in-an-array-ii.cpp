class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        int hash[100001]={0};
        // hash[lower]=2;
        // hash[upper]=2;
        for(auto it:nums)hash[it]=-1;
        vector<vector<int>>ans;
        int st=lower;
        int end=lower;
        int flg=0;
        for(int i=lower;i<=upper;i++){
            if(hash[i]==-1 && flg==1){
                ans.push_back({st,end});
                st=i+1;
                end=st;
                flg=0;
            }
            else if(hash[i]==-1){
                st=i+1;
                end=st;
                flg=0;
            }
            else if(hash[i]==0){
                end=i;
                flg=1;
            }
        }
        if(flg==1)ans.push_back({st,end});
        return ans;
    }
};