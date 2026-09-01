class Solution {
public:
    int chc(int i,int j, vector<int>& target,int fl){
        if(i==target[0]&& j==target[1])return 1;
        if(fl!=1)return 0;
        int ns=0;
        for(int k=0;k<9;k++){
            ns=max(ns,chc(i+k,j+k,target,0));
            ns=max(ns,chc(i-k,j-k,target,0));
            ns=max(ns,chc(i+k,j-k,target,0));
            ns=max(ns,chc(i-k,j+k,target,0));
        }
        return ns;
    }
    int minBishopMoves(vector<int>& src, vector<int>& target) {
        int sm=src[0]+src[1];
        int mm=target[0]+target[1];
        if(sm%2==0 && mm%2!=0)return -1;
        if(mm%2==0 && sm%2!=0)return -1;
        if(chc(src[0],src[1],target,1)==1)return 1;

        return 2;
    }
};