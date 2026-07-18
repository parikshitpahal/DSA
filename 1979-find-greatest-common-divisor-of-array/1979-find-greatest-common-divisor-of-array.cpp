class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn=INT_MAX;
        int mx=0;
        for(auto it : nums){
            mn=min(it,mn);
            mx=max(it,mx);
        }
        return gcd(mx,mn);
    }
};