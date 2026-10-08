class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int dpt=0;
        for(auto it:s){
            if(it=='('){
                dpt++;
                if(dpt>1)ans+=it;
            }
            else{
                dpt--;
                if(dpt>=1)ans+=it;
            } 
            
        }
        return ans;
    }
};