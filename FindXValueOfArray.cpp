#include <vector>

using namespace std;

class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> result(k, 0);
        vector<long long> dp(k, 0);

        for (int num : nums) {
            vector<long long> next_dp(k, 0);
            int val = num % k;
            
            // Start a new subarray containing only current element
            next_dp[val] += 1;
            
            // Extend existing subarrays ending at the previous element
            for (int r = 0; r < k; ++r) {
                if (dp[r] > 0) {
                    next_dp[(r * val) % k] += dp[r];
                }
            }
            
            // Accumulate counts for the result
            for (int r = 0; r < k; ++r) {
                result[r] += next_dp[r];
            }
            
            dp = move(next_dp);
        }

        return result;
    }
};
