class Solution {
public:
    int mx=0;
    void dp(int i,string& s,int st,set<string>& ans,string& tmp){
        if(st<0)return ;
        if(i==s.size()){
            if(st==0 && tmp.size()>=mx){
                ans.insert(tmp);
                int n=tmp.size();
                mx=max(mx,n);
            }
            return;
        }
        dp(i+1,s,st,ans,tmp);
        tmp+=s[i];
        if(s[i]=='(' )dp(i+1,s,st+1,ans,tmp);
        else if(s[i]==')')dp(i+1,s,st-1,ans,tmp);
        else dp(i+1,s,st,ans,tmp);
        tmp.pop_back();
        
    }
    vector<string> removeInvalidParentheses(string s) {
 
        set<string>ans;
        vector<string>res;
        int st=0;
        string current = "";
        dp(0,s,st,ans,current);
        for(auto it:ans){
            cout<<it<<endl;
            if(it.size()==mx ){
                res.push_back(it);
                
            }
        }
        return res;
    }
};