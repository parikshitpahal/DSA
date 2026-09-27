class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>st;
        string tmp="";
        for(auto it:s){
            if(it=='('){
                if(tmp!=" ")st.push(tmp);
                tmp="";
            }
            else if(it==')'){
                reverse(tmp.begin(),tmp.end());
                string tp="";
                if(!st.empty()){
                    tp=st.top();
                    st.pop();
                }
                tp+=tmp;
                tmp=tp;
            }
            else{
                tmp+=it;
            }
        }
        return tmp;
    }
};