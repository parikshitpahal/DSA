class Solution {
public:
    int minimumPushes(string word) {
        int hash[27]={0};
        int sum=0;
        for(int i=0;i<27;i++){
            if(i<8)sum+=1;
            else if(i<16)sum+=2;
            else if(i<24)sum+=3;
            else sum+=4;
            hash[i]=sum;
        }
        return hash[word.size()-1];
    }
};