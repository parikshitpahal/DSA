class Solution {
public:
    long long countCommas(long long n) {
        long long c=0;
        long long ans=0;
        if(n<1000)return 0;
        long long i=999;
        long long pre=1;
        while(pre<=n){

            if(i>n){
                ans+=c*(n-pre);
                return ans;
            }
            ans+=c*(i-pre);
            pre=i;
            i=999+i*1000;
            c++;
        }
        return ans;
    }
};