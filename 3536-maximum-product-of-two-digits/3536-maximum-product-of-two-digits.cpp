class Solution {
public:
    int maxProduct(int n) {
        vector<int>idx;
        while(n){
            idx.push_back(n%10);
            n=n/10;
        }
        sort(idx.begin(),idx.end());
        return idx[idx.size()-1]*idx[idx.size()-2];
    }
};