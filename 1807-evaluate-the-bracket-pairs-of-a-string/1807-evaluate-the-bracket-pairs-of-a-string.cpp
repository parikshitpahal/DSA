class Solution {
public:
    string evaluate(string s, vector<vector<string>>& kno) {
        string ans="";
        
        unordered_map<string,string>mp;
        for(auto it:kno){
            mp[it[0]]=it[1];
        }
      
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                i++; 
                string tmp = "";
                while (i < s.length() && s[i] != ')') {
                    tmp += s[i];
                    i++;
                }
                if(mp.find(tmp)!=mp.end())ans += mp[tmp];
                else ans+='?';
            } else {
                ans += s[i];
            }
}
        return ans;
    }
};