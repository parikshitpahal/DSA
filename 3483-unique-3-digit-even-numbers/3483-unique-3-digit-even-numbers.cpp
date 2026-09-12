class Solution {
public:
    void dp(set<int>& ans,vector<int> & dig,int idx,long long val,int rem,int lmt){
        if(rem==3){
            if((val%10)%2==0 && val%100!=val)ans.insert(val);
        }
        if(idx==lmt)return ;
        dp(ans,dig,idx+1,val*10+dig[idx],rem+1,lmt);
        dp(ans,dig,idx+1,val,rem,lmt);
    }
    int totalNumbers(vector<int>& digits) {
        set<int>ans;
        vector<int>dig(digits.begin(),digits.end());
        dig.insert(dig.end(),digits.begin(),digits.end());

        for(int i=0;i<digits.size();i++){
            for(int j=i;j<i+digits.size();j++){
                dp(ans,dig,i,0,0,i+digits.size());
            }
        }
        // dp(ans,digits,0,0,0);
        reverse(dig.begin(),dig.end());
        for(int i=0;i<digits.size();i++){
            for(int j=i;j<i+digits.size();j++){
                dp(ans,dig,i,0,0,i+digits.size());
            }
        }
        // dp(ans,digits,0,0,0);
        return ans.size();
    }
};