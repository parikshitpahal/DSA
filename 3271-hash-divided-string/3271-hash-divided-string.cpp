class Solution {
public:
    string stringHash(string s, int k) {
        vector<string>pck;
        int m=k;
        for(int i=0;i<s.size();i+=k){
            string ap="";
            for(int j=i;j<i+k;j++){
                ap+=s[j];
            }
            pck.push_back(ap);
        }
        string ans="";
        for(auto it:pck){
            int sum=0;
            for(auto tt:it){
                sum+=tt-'a';
            }
            ans+=(sum%26)+'a';
        }
        return ans;
    }
};