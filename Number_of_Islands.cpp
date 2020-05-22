class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        int m = grid.size(), n = grid[0].size();
        int land_num = 0;
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (grid[i][j] == '1'){
                    land_num++;
                    traverse(i, j, grid);
                }         
            }
        }
        return land_num;
    }
    
    void traverse(int m, int n, vector<vector<char>>& grid){
        if (m < 0 || n < 0 || m == grid.size() || n == grid[0].size() || grid[m][n] == '0')
            return;
        grid[m][n] = '0';
        traverse(m+1, n, grid);
        traverse(m, n+1, grid);
        traverse(m-1, n, grid);
        traverse(m, n-1, grid);
    }
};