#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        if (n <= 3) {
            return 0;
        }

        sort(nums.begin(), nums.end());

        // After changing two elements, the low score can always be made 0
        // (e.g., by setting two equal elements), and the high score is the
        // range (max - min) of the remaining n - 2 elements.
        // Removing 2 elements from the sorted array leaves one of 3 contiguous windows:
        // 1. Drop the 2 smallest: [nums[2] ... nums[n - 1]]
        // 2. Drop the 1 smallest and 1 largest: [nums[1] ... nums[n - 2]]
        // 3. Drop the 2 largest: [nums[0] ... nums[n - 3]]
        int dropTwoSmallest = nums[n - 1] - nums[2];
        int dropBothEnds = nums[n - 2] - nums[1];
        int dropTwoLargest = nums[n - 3] - nums[0];

        return min({dropTwoSmallest, dropBothEnds, dropTwoLargest});
    }
};
