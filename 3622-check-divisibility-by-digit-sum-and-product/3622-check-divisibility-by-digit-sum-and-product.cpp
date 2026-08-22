class Solution {
public:
    bool checkDivisibility(int n) {
        int sm=0;
        int pr=1;
        int x=n;
        while(x){
            int ls=x%10;
            sm+=ls;
            pr*=ls;
            x=x/10;
        }
        if(n%(sm+pr)==0)return true;
        return false;
    }
};