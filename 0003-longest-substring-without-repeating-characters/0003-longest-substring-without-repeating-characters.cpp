class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<1)return 0;
        int i=0;
        int j=0;
        int ans=1;
        int hash[128]={0};
        while(j<s.size()){
            hash[s[j]]++;
            if(hash[s[j]]>1){
                while(hash[s[j]]!=1){
                    hash[s[i]]--;
                    i++;
                }
            }    
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};