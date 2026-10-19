#include <vector>

using namespace std;

class Solution {
private:
    int last_x = 0;
    int last_y = 0;

    void solve(int x, int y, vector<vector<char>>& grid, vector<vector<bool>>& visited) {
        // Record current valid position
        last_x = x;
        last_y = y;

        // Determine next cell
        char dir = grid[x][y];
        int next_x = x;
        int next_y = y;

        if (dir == 'R') next_y++;
        else if (dir == 'L') next_y--;
        else if (dir == 'U') next_x--;
        else if (dir == 'D') next_x++;

        // Boundary and visited checks
        if (next_x < 0 || next_x >= grid.size() || next_y < 0 || next_y >= grid[0].size()) {
            return;
        }
        if (visited[next_x][next_y]) {
            return;
        }

        // Mark next cell as visited and recurse
        visited[next_x][next_y] = true;
        solve(next_x, next_y, grid, visited);
    }

public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        visited[0][0] = true;
        
        solve(0, 0, grid, visited);
        
        return {last_x, last_y};
    }
};