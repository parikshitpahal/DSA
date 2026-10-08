class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<vector<int>,vector<string>>mp;
        for(auto it:strs){
            vector<int>tmp;
            for(auto t:it){
                tmp.push_back(t-'a');
            }
            sort(tmp.begin(),tmp.end());
            mp[tmp].push_back(it);

        }


        vector<vector<string>>ans;
        for(auto [key,it]:mp){
            ans.push_back(it);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};