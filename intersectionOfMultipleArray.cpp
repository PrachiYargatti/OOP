class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n = nums.size();
        // Since values are between 1 and 1000, a frequency array is very efficient
        int count[1001] = {0};

        // Count frequency of each number across all arrays
        for (const auto& arr : nums) {
            for (int num : arr) {
                count[num]++;
            }
        }

        vector<int> result;
        // Collect numbers that appear in all 'n' arrays in ascending order
        for (int i = 1; i <= 1000; i++) {
            if (count[i] == n) {
                result.push_back(i);
            }
        }

        return result;
    }
};
