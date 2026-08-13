class Solution {
public:
    
    void dfs(int i, int j,
             vector<vector<bool>>& vis,
             vector<vector<char>>& board,
             int m, int n) {

        // invalid cell / already visited / water
        if(i < 0 || j < 0 ||
           i >= m || j >= n ||
           vis[i][j] ||
           board[i][j] != 'O') {
            return;
        }

        // mark current cell as visited
        vis[i][j] = true;

        // top
        dfs(i - 1, j, vis, board, m, n);

        // down
        dfs(i + 1, j, vis, board, m, n);

        // left
        dfs(i, j - 1, vis, board, m, n);

        // right
        dfs(i, j + 1, vis, board, m, n);
    }

    
    
    void solve(vector<vector<char>>& board) {
    
        int m = board.size();        // rows
        if(m == 0) return;
        int n = board[0].size();     // columns

        vector<vector<bool>> vis(
            m,
            vector<bool>(n, false)
        );

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(i == 0 || i == m-1 || j == 0 || j == n-1) {
                    dfs(i, j, vis, board, m, n);
                }
            }
        }

         for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(board[i][j] == 'O' && !vis[i][j]) {
                    board[i][j] = 'X';
                }
            }
        }
    }
};
    