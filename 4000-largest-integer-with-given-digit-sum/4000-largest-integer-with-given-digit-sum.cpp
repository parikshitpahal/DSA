class Solution {
public:
    int summ(int n){
        int su=0;
        while(n){
            su+=n%10;
            n=n/10;
        }
        
        return su;
    }

    int largestInteger(int x, int s) {


        int hg=9;
        int mx=-1;
        while(x>1){
            hg=hg*10+9;
            x--;
        }

        for(int i=0;i<=hg;i++){

            if(summ(i)==s){

                mx=max(mx,i);
            }
        }
        return mx;
    }
};