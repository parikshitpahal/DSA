class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' ){
                st.push({s[i],i});
            }
            else if(s[i]==')'){
                if(!st.empty() && st.top().first=='('){
                    st.pop();
                }
                else{
                    st.push({s[i],i});
                }
            }
        } 
        while(!st.empty()){
            int idx=st.top().second;
            s[idx]='/';
            st.pop();
        }  
        string ans="";
        for(auto it:s){
            if(it!='/'){
                ans+=it;
            }
        }
        return ans;
    }
};