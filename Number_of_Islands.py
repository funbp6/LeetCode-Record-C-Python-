class Solution:
    def numIslands(self, grid):
        if not grid:
            return 0
        m, n = len(grid), len(grid[0])
        # gone = [[0 for i in range(n)] for j in range(m)]
        
        
        def dfs(grid, i, j):
            if i<0 or j<0 or i>=m or j>=n or grid[i][j] != '1':
                return 
            grid[i][j] = '#'
            dfs(grid, i+1, j)
            dfs(grid, i-1, j)
            dfs(grid, i, j+1)
            dfs(grid, i, j-1)
        

        count = 0
        for i in range(m):
            for j in range(n):
                if grid[i][j] == '1' :
                    dfs(grid, i, j)
                    count += 1
        return count
