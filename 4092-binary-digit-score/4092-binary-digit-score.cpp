class Solution {
public:
    int bin(int a){
        if(a==0)return 0;
        int rm=0;
        if(a%2!=0)rm=1;
        return rm+=bin(a/2)*10;
    }
    int calculateScore(int a, int b) {
        int sm=0;
        int sm2=0;
        sm=bin(a);
        sm2=bin(b);
        int s2=0;
        int s=0;
        
        while(sm2){
            s2+=sm2%10;
            sm2/=10;
        }
        while(sm){
            s+=sm%10;
            sm/=10;
        }
        cout<<s<<endl;
        cout<<s2<<endl;
        return s>=s2 ? s*s2 : s2/s;
    }
};