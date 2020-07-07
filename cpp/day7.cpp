class Solution {
public:
    int returnOpenSides(vector<vector<int>>& grid, int x, int y) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        if (x < m && x >= 0) {
            if (x == 0 || grid[x - 1][y] == 0)
                count++;
            if (x == m - 1 || grid[x + 1][y] == 0)
                count++;
        }
        if (y < n && y >= 0) {
            if (y == 0 || grid[x][y - 1] == 0)
                count++;
            if (y == n - 1 || grid[x][y + 1] == 0)
                count++;
        }
        return count;
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j])
                    ans += returnOpenSides(grid, i, j);
            }
        }
        return ans;
    }
};
