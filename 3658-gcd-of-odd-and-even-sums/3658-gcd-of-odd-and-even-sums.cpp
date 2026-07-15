class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sodd=0;
        int seven=0;
        for(int i=0;i<=n*2;i++){
            if(i%2==0){
                seven+=i;
            }
            else{
                sodd+=i;
            }
        }
        int minn=min(seven,sodd);
        int res=0;
        for(int i=1;i<=minn;i++){
            if(seven%i==0 && sodd%i==0){
                res=max(res,i);
            }
        }
        return res;
    }
};