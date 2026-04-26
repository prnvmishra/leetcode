class Solution {
public:
    int n, m;
    
    bool dfs(int x, int y, int px, int py, vector<vector<char>>& grid, vector<vector<bool>>& vis) {
        vis[x][y] = true;
        
        vector<pair<int,int>> dirs = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        
        for (auto [dx, dy] : dirs) {
            int nx = x + dx;
            int ny = y + dy;
            
            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (grid[nx][ny] != grid[x][y]) continue;
            
            if (!vis[nx][ny]) {
                if (dfs(nx, ny, x, y, grid, vis)) return true;
            } else {
                // visited and not parent → cycle
                if (nx != px || ny != py) return true;
            }
        }
        
        return false;
    }
    
    bool containsCycle(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();
        
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j]) {
                    if (dfs(i, j, -1, -1, grid, vis)) {
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
};