class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int x1=0;
        int x2=0;
        int res=9999;
        vector<int>ans;
        for(int i=0;i<nums.size();i+=2){
            x1=nums[i];
            x2=nums[i+1];
            int tmp=x2;
            while(tmp){
                x1*=10;
                tmp/=10;
            }
            x1+=x2;
            res=min(res,x1);
            ans.push_back(x1);
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};