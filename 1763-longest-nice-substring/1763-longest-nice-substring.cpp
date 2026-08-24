class Solution {
public:
    string longestNiceSubstring(string s) {
        if(s.size()==1)return "";
        string ans="";
        int mx=0;
        for(int i=0;i<s.size();i++){
            int hs1[27]={0};
            int hs2[27]={0};
            string tmp="";
            
            for(int j=i;j<s.size();j++){
                int fl=0;
                tmp+=s[j];
                if(s[j]>='A' && s[j]<='Z')hs1[s[j]-'A']=1;
                else hs2[s[j]-'a']=1;

                for(int k=0;k<27;k++){
                if(hs1[k]!=1 && hs2[k]==1){
                    fl=1;
                    break;
                }
                if(hs1[k]==1 && hs2[k]!=1){
                    fl=1;
                    break;
                }
            }
            if(fl==0 && tmp.size()>mx){
                ans=tmp;
                mx=tmp.size();
            }
            }
            

        }
        return ans;
    }
};