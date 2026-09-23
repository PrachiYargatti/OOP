#include <vector>
#include <numeric>
#include <algorithm>

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        int target = totalSum - x;
        
        // If target is 0, we need to remove all elements
        if (target == 0) {
            return nums.size();
        }
        // If target is negative, it's impossible to reach x
        if (target < 0) {
            return -1;
        }

        int left = 0;
        int currentSum = 0;
        int maxLength = -1;

        for (int right = 0; right < nums.size(); ++right) {
            currentSum += nums[right];

            // Shrink the window until currentSum <= target
            while (currentSum > target && left <= right) {
                currentSum -= nums[left];
                left++;
            }

            // Check if we found a valid subarray
            if (currentSum == target) {
                maxLength = max(maxLength, right - left + 1);
            }
        }

        return maxLength == -1 ? -1 : nums.size() - maxLength;
    }
};
