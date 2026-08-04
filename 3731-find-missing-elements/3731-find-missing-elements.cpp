class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mn=101;
        int ans=0;
        int mx=-1;
        int hash[101]={0};
        for(auto it:nums){
            hash[it]++;
            mx=max(mx,it);
            mn=min(mn,it);
            
        }
        
        vector<int>v;
        for(int i=mn;i<=mx;i++){
            if(hash[i]==0)v.push_back(i);
        }
        return v;
    }
};