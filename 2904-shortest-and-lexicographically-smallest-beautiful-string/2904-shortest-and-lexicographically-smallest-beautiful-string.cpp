class Solution {
public:
    string lexo(string s,string l){
        if(s.size()<l.size())return s;
        if(l.size()<s.size())return l;
        for(int i=0;i<s.size();i++){
            if(s[i]<l[i])return s;
            else if(s[i]>l[i])return l;
        }
        return s;
    }
    string shortestBeautifulSubstring(string s, int k) {
        int c=0;
        int mx=s.size()+1;

        int i=0;
        while(s[i]=='0')i++;
        int j=0;
        while(s[j]=='0')j++;
        string tmp="";
        string ans="";
        while(i<s.size()){ 
            if(c==k){
                if(tmp.size()<mx){
                    ans=tmp;
                    mx=tmp.size();
                }
                else if(tmp.size()==mx){
                    ans=lexo(ans,tmp);
                }
            }
            else if(c>k){
                while(c!=k){
                    if(s[i]=='1')c--;
                    i++;
                }
                while(s[i]=='0')i++;
                tmp=s.substr(i,j-i);
                continue;
            }
            if(j!=s.size() && s[j]=='1')c++;
            if(j!=s.size())tmp+=s[j];
            if(j<s.size())j++;
            else{
                if(s[i]=='1')c--;
                i++;
                tmp=s.substr(i,j-i);
                
            } 
        }
        return ans;
    }
};