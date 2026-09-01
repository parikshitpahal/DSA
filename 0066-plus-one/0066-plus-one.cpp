class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        if(digits[n]+1!=10){
            digits[n]=digits[n]+1;
            return digits;
        }
        vector<int>res;
        int cr=1;
        int i=n;
        while(n>=0 && cr){
            int tm=(digits[n]+cr)%10;
            cr=(digits[n--]+cr)/10;
            i--;
            res.push_back(tm);
        }
        if(cr)res.push_back(cr);
        for(int j=i;j>=0;j--){
            res.push_back(digits[j]);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};