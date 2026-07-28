class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        // long long val=s;
        // long long ans=val;
        // for(long long i=1;i<n;i++){
        //     if(i%2==0)val-=1;
        //     else val+=m;
        //     ans=max(ans,val);
        // }
        if(n==1)return s;
        long long pl=1ll*(n/2)*m;
        long long ng=n/2;
        return s+pl-ng+1;
    }
};