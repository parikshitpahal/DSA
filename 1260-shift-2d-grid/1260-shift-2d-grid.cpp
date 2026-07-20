class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        
        vector<int> tmp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                tmp.push_back(grid[i][j]);
            }
        }
        k=k%tmp.size();
        reverse(tmp.begin(),tmp.end());
        reverse(tmp.begin(),tmp.begin()+k);
        reverse(tmp.begin()+k,tmp.end());
        int idx=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                grid[i][j]=tmp[idx++];
            }
        }
        return grid;
    }
};