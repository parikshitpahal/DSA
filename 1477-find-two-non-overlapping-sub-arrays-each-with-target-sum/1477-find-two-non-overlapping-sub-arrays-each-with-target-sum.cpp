class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int k) {
        vector<int>prem(arr.size(),INT_MAX);
        int i=0;
        int j=0;
        int sm=0;
        int mn=INT_MAX;
        int res=INT_MAX;
        while(j<arr.size()){
            sm+=arr[j];
            while(i<j && sm>k){
                sm-=arr[i];
                i++;
            }
            if(sm==k){
                if(i!=0 && prem[i-1]!=INT_MAX){
                    res=min(res,j-i+1+prem[i-1]);
                }
                mn=min(j-i+1,mn);
            }
            prem[j]=mn;
            j++;
        }
        return res==INT_MAX?-1:res;
    }
};