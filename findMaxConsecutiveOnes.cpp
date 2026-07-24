class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;
        int cur_count = 0;

        for(int num : nums){
            if(num == 1){
                cur_count++;
                max_count = max(max_count, cur_count);
            }
            else{
                cur_count = 0;
            }
        }

        return max_count;
    }
};
