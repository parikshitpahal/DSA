class Solution {
public:
    int mx = 0;
    
    void dfs(int i, int j, vector<vector<int>>& vis, vector<vector<int>>& grid, int c) {
        if (i < 0 || j < 0 || i == grid.size() || j == grid[0].size()) return;
        if (grid[i][j] == 0) return;
        if (c >= vis[i][j]) return;
        
        vis[i][j] = c;
        dfs(i, j + 1, vis, grid, c + 1);
        dfs(i + 1, j, vis, grid, c + 1);
        dfs(i, j - 1, vis, grid, c + 1);
        dfs(i - 1, j, vis, grid, c + 1);
    }

    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 999));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    dfs(i, j, vis, grid, 0);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    if (vis[i][j] == 999) return -1;
                    mx = max(mx, vis[i][j]);
                }
            }
        }

        return mx;
    }
};