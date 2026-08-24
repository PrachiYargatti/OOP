class Solution {
public:
    int stoneGameVIII(vector<int>& stones) {
        int n = stones.size();
        
        // Compute prefix sums in-place
        for (int i = 1; i < n; ++i) {
            stones[i] += stones[i - 1];
        }
        
        // Base case: if a player takes all stones, the score difference is prefix sum of all elements
        int max_diff = stones[n - 1];
        
        // Dynamic programming moving backwards from n-2 down to index 1 (x > 1)
        for (int i = n - 2; i > 0; --i) {
            max_diff = max(max_diff, stones[i] - max_diff);
        }
        
        return max_diff;
    }
};
