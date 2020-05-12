class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        m, n = len(grid), len(grid[0])
        minPathSum = 0
        
        def findpath(grid, pathsum, i, j):
            if i > m or j > n :
                if pathsum < minpathsum:
                    minpathsum = pathsum
                return
            
            findpath(grid, pathsum + grid[i][j], i + 1, j)
            findpath(grid, pathsum + grid[i][j], i, j + 1)
        
        findpath(grid, grid[0][0], m, n)