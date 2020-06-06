class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        queue<pair<int, int>> q;
        vector<pair<int, int>> dirs{{0,1}, {0,-1}, {1,0}, {-1,0}}; 
        vector<vector<int>> ans(m, vector<int>(n, INT_MAX - 10000));
        
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (matrix[i][j] == 0){
                    ans[i][j] = 0;
                }
                if (i > 0) ans[i][j] = min(ans[i][j], ans[i-1][j] + 1);
                if (j > 0) ans[i][j] = min(ans[i][j], ans[i][j-1] + 1);
            }
        }
        
        for (int i = m-1; i >= 0; i--){
            for (int j = n-1; j >= 0; j--){
                if (i < m-1) ans[i][j] = min(ans[i][j], ans[i+1][j] + 1);
                if (j < n-1) ans[i][j] = min(ans[i][j], ans[i][j+1] + 1);
            }
        }

        return ans;
    }
};