class Solution {
public:
    vector<int>months={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int hash[13][32]={0};

    void chc(int arrm,int arrd,int levm, int levd){
        if(arrm!=levm){
            for(int i=arrd;i<=months[arrm];i++){
                hash[arrm][i]++;
            }
            arrm++;
            while(arrm!=levm){
                for(int i=1;i<=months[arrm];i++){
                    hash[arrm][i]++;
                }
                arrm++;
            }
            for(int i=1;i<=levd;i++){
                hash[levm][i]++;
            }
        }
        else{
            for(int i=arrd;i<=levd;i++){
                hash[levm][i]++;
            }
        }
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        
        int aam=stoi(arriveAlice.substr(0,2));
        int aad=stoi(arriveAlice.substr(3,2));
        int alm=stoi(leaveAlice.substr(0,2));
        int ald=stoi(leaveAlice.substr(3,2));

        chc(aam,aad,alm,ald);

        aam=stoi(arriveBob.substr(0,2));
        aad=stoi(arriveBob.substr(3,2));
        alm=stoi(leaveBob.substr(0,2));
        ald=stoi(leaveBob.substr(3,2));
        chc(aam,aad,alm,ald);
        
        int ans=0;
        for(int i=1;i<13;i++){
            for(int j=0;j<=months[i];j++){
                if(hash[i][j]==2)ans++;
            }
        }
        return ans;
    }
};