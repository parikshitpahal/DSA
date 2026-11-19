class Solution {
public:
    int dfs(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& vis) {
        vis[i][j] = 1;
        int count = 1;


        for (int col = 0; col < grid[0].size(); col++) {
            if (grid[i][col] == 1 && vis[i][col] == -1) {
                count += dfs(i, col, grid, vis);
            }
        }


        for (int row = 0; row < grid.size(); row++) {
            if (grid[row][j] == 1 && vis[row][j] == -1) {
                count += dfs(row, j, grid, vis);
            }
        }

        return count;
    }

    int countServers(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> vis(m, vector<int>(n, -1));
        int ans = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1 && vis[i][j] == -1) {
                    int tmp = dfs(i, j, grid, vis);
                    if (tmp > 1) ans += tmp;
                }
            }
        }
        return ans;
    }
};