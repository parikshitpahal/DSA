class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        vector<int>tmp=score;
        sort(tmp.begin(),tmp.end());
        reverse(tmp.begin(),tmp.end());
        map<int,string>mp;
        mp[tmp[0]]="Gold Medal";
        if(tmp.size()>1)mp[tmp[1]]="Silver Medal";
        if(tmp.size()>2)mp[tmp[2]]="Bronze Medal";
        for(int i=3;i<tmp.size();i++){
            mp[tmp[i]]=to_string(i+1);
        }

        vector<string>ans;
        for(auto it:score){
            ans.push_back(mp[it]);
        }
        return ans;
    }
};