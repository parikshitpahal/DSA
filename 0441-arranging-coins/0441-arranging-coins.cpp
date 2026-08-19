class Solution {
public:
    int arrangeCoins(int n) {
        int x=n;
        for(int i=1;i<n;i++){
            x-=i;
            if(x==0)return i;
            if(x<0)return i-1;
        }
        return 1;
    }
};