class Solution {
public:
    int maxProduct(int n) {
        vector<int>idx;
        idx.push_back(0);
        int smx=0;
        int mx=0;
        while(n){
            if(mx<=n%10){
                smx=mx;
                mx=n%10;
            }
            else if(smx<n%10){
                smx=n%10;
            }
            n=n/10;
        }

        return smx*mx;
    }
};