class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mn=0;
        int mx=0;
        int mvl=INT_MAX;
        int xvl=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(mvl>nums[i]){
                mvl=nums[i];
                mn=i;
            }
            if(xvl<nums[i]){
                xvl=nums[i];
                mx=i;
            }
        }
        cout<<nums.size()<<" "<<mx<<" "<<mn;
        if(mx==mn)return 1;
        int n=nums.size();
        int ans=9999;
         int ans1=9999;
        // if(mn<=nums.size()/2 && mx<=nums.size()/2){
            ans = mx>mn?mx+1:mn+1;
        // }
        // if(mn>=nums.size()/2 && mx>=nums.size()/2){
            ans1= mx<mn?n-mx:n-mn;
        // }
        ans=min(ans,ans1);
        return min(ans,mn<mx? (mn+1) + (n-mx) : (mx+1) + (n-mn) );
    }
};