class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& arr) {
        int ans=0;
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<arr.size()-1;i++){
            int x=arr[i][0];
            int y=arr[i][1];
            for(int j=i+1;j<arr.size();j++){
                if(y>=arr[j][0])ans++;
            }
        }
        return ans;
    }
};