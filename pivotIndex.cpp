class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // Calculate the total sum of all elements
        int total_sum = accumulate(nums.begin(), nums.end(), 0);
        int left_sum = 0;

        for (int i = 0; i < nums.size(); ++i) {
            // Right sum is: total_sum - left_sum - nums[i]
            if (left_sum == total_sum - left_sum - nums[i]) {
                return i; // First (leftmost) pivot index found
            }
            // Update left_sum for the next iteration
            left_sum += nums[i];
        }

        return -1; // No pivot index found
    }
};
