class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {

        long long sum=0;
        long long c=0;
        char xx=x+'0';
        unordered_map<long long,int>mp;
        for(int i=0;i<nums.size();i++){
            sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j]; 
                if(sum%10!=x)continue;
                mp[sum]++;
            }
        }
        int ls=0;
        for(auto& [key,val]:mp){
            string ans=to_string(key);
            
            cout<<ans<<endl;
            if(ans[0]==xx && ans[ans.size()-1]==xx){
                c+=val;
            }
            
        }
        return c;
    }
};