#include <vector>
#include <algorithm>

class Solution {
public:
    int firstStableIndex(std::vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return -1;

        // Precompute minimum values from right to left
        std::vector<int> right_min(n);
        right_min[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            right_min[i] = std::min(right_min[i + 1], nums[i]);
        }

        // Iterate left-to-right tracking max element on the left
        int left_max = nums[0];
        for (int i = 0; i < n; ++i) {
            left_max = std::max(left_max, nums[i]);
            
            int instability_score = left_max - right_min[i];
            if (instability_score <= k) {
                return i; // Return the first (smallest) valid index
            }
        }

        return -1;
    }
};
