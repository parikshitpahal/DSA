class Solution {
public:
    int dp(int i, int j, vector<vector<int>>& grid, int xr, vector<vector<vector<int>>>& memo) {
        int m = grid.size();
        int n = grid[0].size();
        
        if (i == m || j == n) {
            return 1e9; 
        }
        
        if (i == m - 1 && j == n - 1) {
            return xr ^ grid[i][j];
        }
        

        if (memo[i][j][xr] != -1) {
            return memo[i][j][xr];
        }
        
        int next_xr = xr ^ grid[i][j];
        int right = dp(i, j + 1, grid, next_xr, memo);
        int down = dp(i + 1, j, grid, next_xr, memo);
        
        return memo[i][j][xr] = min(right, down);
    }

    int minCost(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<vector<int>>> memo(m, vector<vector<int>>(n, vector<int>(1024, -1)));
        
        int initial_xr = grid[0][0];
        if (m == 1 && n == 1) return initial_xr;
        
        return min(dp(0, 1, grid, initial_xr, memo), dp(1, 0, grid, initial_xr, memo));
    }
};