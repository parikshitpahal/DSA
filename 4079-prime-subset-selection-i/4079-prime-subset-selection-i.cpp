class Solution {
public:
    vector<int>prm;
    
    bool isprime(int n){
        for(auto it:prm){
            if (it * it > n) break;
            if(n%it==0)return false;
        }
        
        prm.push_back(n);
        return true;
    }
    vector<int> maxPrimes(int n, int s) {
        vector<int>ans;
        prm.push_back(2);
        if(s==1 || n==1)return ans;
        ans.push_back(2);
        int sm=2;
        for(int i=3;i<=n;i++){
            
            if(isprime(i)){
                sm+=i;
                if(sm<=s)ans.push_back(i);
                else break;
            }
            
        }
        return ans;
    }
};