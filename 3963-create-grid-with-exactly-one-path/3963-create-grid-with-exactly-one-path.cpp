class Solution {
public:
    vector<string> createGrid(int m, int n) {
        
        vector<string>ans;

        string tmp="";
        for(int i=0;i<n;i++){
            tmp+=".";
        }
        ans.push_back(tmp);
        for(int i=1;i<m;i++){
            tmp="";
            for(int j=0;j<n-1;j++){
                tmp+="#";
            }
            tmp+=".";
            ans.push_back(tmp);
        }
        return ans;
    }
};