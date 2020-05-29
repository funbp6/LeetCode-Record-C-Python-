class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1, INT_MAX);
        dp[0] = 0;
        
        for (int i = 1; i <= n; i++){
            for (int x = 1; x*x <= i; x++){
                dp[i] = min (dp[i], dp[i - x*x] + 1);
            }
        }
        return dp[n];
    }
};