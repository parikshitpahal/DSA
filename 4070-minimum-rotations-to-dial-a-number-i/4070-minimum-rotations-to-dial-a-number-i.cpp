class Solution {
public:
    int minRotations(string s) {
        int ans=0;
        int pre=0;
        
        for(auto it:s){
            int mn=min(abs(pre-(it-'0')),9-abs(pre-(it-'0'))+1);
            ans+=mn;
            pre=(it-'0');
        }
        return ans;
    }
};