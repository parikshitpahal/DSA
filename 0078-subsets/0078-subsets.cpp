class Solution {
public:
    void fun( vector<vector<int>> &res,vector<int>& nums,vector<int> ps,int cnt){
        if(cnt==nums.size()){
           
            res.push_back(ps);
            return;
        }
        // ps.push_back(nums[cnt]);
        fun(res,nums,ps,cnt+1);
        ps.push_back(nums[cnt]);

        fun(res,nums,ps,cnt+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>ps;
        fun(res,nums,ps,0);
        return res;
    }
};