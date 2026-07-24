class Solution {
public:
    int thirdMax(std::vector<int>& nums) {
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;

        for (int num : nums) {
            // Skip duplicate values
            if (num == first || num == second || num == third) {
                continue;
            }

            // Update top 3 maximums
            if (num > first) {
                third = second;
                second = first;
                first = num;
            } else if (num > second) {
                third = second;
                second = num;
            } else if (num > third) {
                third = num;
            }
        }

        // Return the third maximum if it exists; otherwise, return the maximum
        return third != LLONG_MIN ? third : first;
    }
};
