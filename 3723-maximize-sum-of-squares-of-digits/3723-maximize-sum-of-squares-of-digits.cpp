class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum < 0 || sum > 9 * num) return "";
        string ans="";
        while(num!=0 ){
            if(sum<0)sum=0;
            ans+=to_string(min(9,sum));
            sum-=9;
            num--;
        }
        return ans;
    }
};