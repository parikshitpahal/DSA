class Solution {
public:
    int chc(string s){
        int i=0;
        int j=s.size()-1;
        int dis=0;
        while(i<j){
            if(s[i]>s[j])dis+=min(abs(s[i]-s[j]),abs(26-s[i++]+s[j--]));
            else{
                dis+=min(abs(s[i]-s[j]),abs(26-s[j--]+s[i++]));
            }
        }
        return dis;
    }
    int minOperations(string s) {
        int c=0;
        int ans=99999;
        for(int i=0;i<s.size();i++){
            string t = s.substr(i) + s.substr(0, i);
            ans=min(ans,chc(t)+(c++));
        }
        return ans;
    }
};