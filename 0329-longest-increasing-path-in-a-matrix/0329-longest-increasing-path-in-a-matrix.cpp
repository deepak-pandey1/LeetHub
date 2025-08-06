class Solution {
public:
    int m, n;
    vector<vector<int>> dp;
    vector<vector<int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};
    
    int dfs(vector<vector<int>>& matrix, int i, int j) {
        if (dp[i][j] != 0) return dp[i][j];
        
        int maxLen = 1;
        for (auto& dir : directions) {
            int x = i + dir[0];
            int y = j + dir[1];
            if (x >= 0 && y >= 0 && x < m && y < n && matrix[x][y] > matrix[i][j]) {
                maxLen = max(maxLen, 1 + dfs(matrix, x, y));
            }
        }
        dp[i][j] = maxLen;
        return maxLen;
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        m = matrix.size();
        n = matrix[0].size();
        dp.assign(m, vector<int>(n, 0));
        
        int ans = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans = max(ans, dfs(matrix, i, j));
            }
        }
        return ans;
    }
};
