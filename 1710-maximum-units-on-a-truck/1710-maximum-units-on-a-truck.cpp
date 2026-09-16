class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int k) {
        sort(boxTypes.begin(),boxTypes.end(),[](vector<int>& a,vector<int>& b){
            return a[1]>b[1];
        });
        int an=0;
        for(auto it:boxTypes){
            int rem=k-it[0];
            if(rem>0){
                an+=it[0]*it[1];
            }
            else{
                an+=k*it[1];
                break;
            }
            k-=it[0];
        }
        return an;
    }
};