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

    int largestInteger(int n, int s) {
        int x=n;
        int lw=0;
        int hg=9;
        int mx=-1;
        while(x>1){
            hg=hg*10+9;
            x--;
        }
        cout<<lw<<endl;
        cout<<hg<<endl;
        for(int i=lw;i<=hg;i++){
            int tmp=summ(i);
            if(tmp==s){
                cout<<i<<endl;
                mx=max(mx,i);
            }
        }
        return mx;
    }
};