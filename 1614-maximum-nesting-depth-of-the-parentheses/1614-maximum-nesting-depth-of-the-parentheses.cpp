class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int c=0;
        for(auto it:s){
            if(it=='(')c++;
            if(it==')')c--;
            ans=max(c,ans);
        }
        return ans;
    }
};