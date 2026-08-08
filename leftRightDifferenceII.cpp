class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int rightsum = 0;
        for(int num:nums){
            rightsum += num;
        }

        int leftsum = 0;
        for (int i=0;i<nums.size();i++){
            int val = nums[i];
            rightsum -= val;
            nums[i] = abs(leftsum - rightsum);
            leftsum += val;
        }

        return nums;
    }
};
