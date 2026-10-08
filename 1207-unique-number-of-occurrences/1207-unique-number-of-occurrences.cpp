class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(auto it:arr){
            mp1[it]++;
            
        }
        int c=0;
        for(auto [key,it] :mp1){
            if(mp2.find(it)==mp2.end()){
                mp2[it]=1;
                cout<<1;
                c++;
            }
            else{
                 return false;
            }
        }
        return true;
    }
};