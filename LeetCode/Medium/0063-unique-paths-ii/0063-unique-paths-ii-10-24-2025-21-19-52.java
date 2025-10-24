class Solution {
    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        int m = obstacleGrid.length;
        int n = obstacleGrid[0].length;
        int[][] memo = new int[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                memo[i][j] = -1;
            }
        }
        return dfs(obstacleGrid, 0, 0, memo);
    }
    private int dfs(int[][] grid, int i, int j, int[][] memo) {
        int m = grid.length;
        int n = grid[0].length;
        if (i >= m || j >= n || grid[i][j] == 1) return 0;
        if (i == m - 1 && j == n - 1) return 1;
        if (memo[i][j] != -1) return memo[i][j];
        memo[i][j] = dfs(grid, i + 1, j, memo) + dfs(grid, i, j + 1, memo);
        return memo[i][j];
    }
}
