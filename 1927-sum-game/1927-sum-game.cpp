class Solution {
public:
    bool sumGame(string num) {
        int lsum=0;
        int rsum=0;
        int ql=0;
        int qr=0;
        int hf=num.size()/2;
        for(int i=0;i<num.size();i++){
            if(i<hf){
                if(num[i]=='?')ql++;
                else{
                    lsum+=num[i]-'0';
                }
            }
            else{
                if(num[i]=='?')qr++;
                else{
                    rsum+=num[i]-'0';
                }
            }
        }
        if((ql+qr)%2!=0)return true;

        int dif=lsum-rsum;
        int qdf=ql-qr;

        if(-(dif*2)==(qdf*9))return false;
        return true;
    }
};