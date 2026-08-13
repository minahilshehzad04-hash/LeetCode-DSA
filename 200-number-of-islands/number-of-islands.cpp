class Solution {
public:

    void dfs(int i, int j,
             vector<vector<bool>>& vis,
             vector<vector<char>>& grid,
             int m, int n) {

        // invalid cell / already visited / water
        if(i < 0 || j < 0 ||
           i >= m || j >= n ||
           vis[i][j] ||
           grid[i][j] != '1') {

            return;
        }

        // mark current cell as visited
        vis[i][j] = true;

        // top
        dfs(i - 1, j, vis, grid, m, n);

        // down
        dfs(i + 1, j, vis, grid, m, n);

        // left
        dfs(i, j - 1, vis, grid, m, n);

        // right
        dfs(i, j + 1, vis, grid, m, n);
    }


    int numIslands(vector<vector<char>>& grid) {

        int isLand = 0;

        int m = grid.size();        // rows
        int n = grid[0].size();     // columns

        vector<vector<bool>> vis(
            m,
            vector<bool>(n, false)
        );

        for(int i = 0; i < m; i++) {

            for(int j = 0; j < n; j++) {

                if(grid[i][j] == '1' && !vis[i][j]) {

                    dfs(i, j, vis, grid, m, n);

                    isLand++;
                }
            }
        }

        return isLand;
    }
};