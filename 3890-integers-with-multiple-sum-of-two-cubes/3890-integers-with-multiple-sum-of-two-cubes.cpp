class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        int idx=0;
        for(int i=0;i<=1000;i++){
            if(i*i*i>n){
                idx=i-1;
                break;
            }
            else if(i*i*i==n){
                idx=i;
                break;
            }
        }
        unordered_map<int,int>hash;
        vector<int>v;
        for(int i=1;i<=idx;i++){
            for(int j=i;j<=idx;j++){
                int lft=i*i*i;
                int rgh=j*j*j;
                if( lft+rgh<=n)hash[lft+rgh]++;
                if(hash[lft+rgh]==2 && lft+rgh<=n) v.push_back(lft+rgh);
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};