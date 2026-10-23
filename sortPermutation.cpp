#include <vector>

class Solution {
public:
    int sortPermutation(std::vector<int>& nums) {
        int n = nums.size();
        int k = -1; // Initialize with -1 (all bits set to 1)
        bool elements_mismatched = false;

        for (int i = 0; i < n; ++i) {
            if (nums[i] != i) {
                if (!elements_mismatched) {
                    k = nums[i];
                    elements_mismatched = true;
                } else {
                    k &= nums[i];
                }
            }
        }

        return elements_mismatched ? k : 0;
    }
};
