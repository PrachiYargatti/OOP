class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min_val = nums[0];
        long long total_moves = 0;

        for(int num: nums){
            min_val = min(min_val, num);
        }

        for(int num: nums){
            total_moves += (num - min_val);
        }
        return total_moves;
    }
};
