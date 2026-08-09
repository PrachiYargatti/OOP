class Solution {
public:
    int memo[101][101];
    
    int solve(int i, int M, const vector<int>& suffixSum, int n) {
        // If we can take all remaining piles, take them all
        if (i + 2 * M >= n) {
            return suffixSum[i];
        }
        
        // Return cached result if already computed
        if (memo[i][M] != 0) {
            return memo[i][M];
        }
        
        int maxStones = 0;
        // Try taking X piles (1 <= X <= 2M)
        for (int X = 1; X <= 2 * M; ++X) {
            int nextM = max(M, X);
            // Opponent gets solve(i + X, nextM) stones from the rest
            int currentStones = suffixSum[i] - solve(i + X, nextM, suffixSum, n);
            maxStones = max(maxStones, currentStones);
        }
        
        return memo[i][M] = maxStones;
    }

    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        
        // Compute suffix sums
        vector<int> suffixSum(n);
        suffixSum[n - 1] = piles[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            suffixSum[i] = suffixSum[i + 1] + piles[i];
        }
        
        return solve(0, 1, suffixSum, n);
    }
};
