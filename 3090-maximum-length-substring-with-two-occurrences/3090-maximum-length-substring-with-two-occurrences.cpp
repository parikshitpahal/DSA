class Solution {
public:
    int maximumLengthSubstring(string s) {
        int mx=0;
        int lft=0;
        int hash[27]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
            while(hash[s[i]-'a']>2){
                hash[s[lft]-'a']--;
                lft++;
            }
            mx=max(mx,i-lft+1);
        }
        return mx;
    }
};