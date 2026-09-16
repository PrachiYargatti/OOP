class Solution {
public:
    int numberOfSets(int n, int k) {
        int MOD = 1e9 + 7;
        // dp[i][j]: number of ways to form j segments using first i points
        // sum_dp[i][j]: running prefix sum of dp[i][j]
        vector<vector<long long>> dp(n, vector<long long>(k + 1, 0));
        vector<vector<long long>> sum_dp(n, vector<long long>(k + 1, 0));

        for (int i = 0; i < n; i++) {
            dp[i][0] = 1;
            sum_dp[i][0] = i + 1;
        }

        for (int j = 1; j <= k; j++) {
            for (int i = 1; i < n; i++) {
                // dp[i][j] = dp[i-1][j] (don't end segment at i)
                //          + sum_{p=0}^{i-1} dp[p][j-1] (end a segment at i starting at p)
                dp[i][j] = (dp[i - 1][j] + sum_dp[i - 1][j - 1]) % MOD;
                sum_dp[i][j] = (sum_dp[i - 1][j] + dp[i][j]) % MOD;
            }
        }

        return dp[n - 1][k];
    }
};
