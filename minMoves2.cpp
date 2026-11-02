class Solution {
public:
    int minMoves2(vector<int>& nums) {
        // Step 1: Sort the array to find the median
        sort(nums.begin(), nums.end());
        
        // Step 2: Identify the median element
        int median = nums[nums.size() / 2];
        int moves = 0;
        
        // Step 3: Calculate total moves to convert all numbers to the median
        for (int num : nums) {
            moves += abs(num - median);
        }
        
        return moves;
    }
};
