class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int n = nums.size();

        int max = INT_MIN, secmax = INT_MIN, min = INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i] > max){
                secmax = max;
                max = nums[i];
            }
            else if(nums[i] > secmax){
                secmax = nums[i];
            }
            if(nums[i] < min){
                min = nums[i];
            }
        }

        return secmax+max-(min);
    }
};
