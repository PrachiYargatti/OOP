#include <bits/stdc++.h>
using namespace std;

class solution {
  public:
    int minimumCoins(vector<int>& arr, int amount) {
        // Use a value larger than any possible answer as a placeholder for infinity
        int INF = amount + 1;
        vector<int> dp(amount + 1, INF);
        
        dp[0] = 0; // Base case: 0 coins needed to make amount 0
        
        // Process coin by coin (optimal cache locality)
        for (int coin : arr) {
            for (int i = coin; i <= amount; i++) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
        
        return dp[amount] == INF ? -1 : dp[amount];
    }    
};
