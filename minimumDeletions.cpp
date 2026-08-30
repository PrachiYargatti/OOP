#include <vector>
#include <algorithm>

class Solution {
public:
    int minimumDeletions(std::vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 1;

        int minIdx = 0;
        int maxIdx = 0;

        // Find indices of minimum and maximum elements
        for (int k = 0; k < n; ++k) {
            if (nums[k] < nums[minIdx]) minIdx = k;
            if (nums[k] > nums[maxIdx]) maxIdx = k;
        }

        // Order the indices so i is the smaller index and j is the larger index
        int i = min(minIdx, maxIdx);
        int j = max(minIdx, maxIdx);

        // Option 1: Delete both from the front
        int both_front = j + 1;

        // Option 2: Delete both from the back
        int both_back = n - i;

        // Option 3: Delete one from the front and one from the back
        int front_and_back = (i + 1) + (n - j);

        return min({both_front, both_back, front_and_back});
    }
};
