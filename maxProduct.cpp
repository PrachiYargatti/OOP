class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = INT_MIN, secmax = INT_MIN;

        for(int i=0;i<nums.size();i++){
            if(nums[i] > max){
                secmax=max;
                max=nums[i];
            }
            else if(nums[i] > secmax){
                secmax=nums[i];
            }
        }

        return (max-1)*(secmax-1);
    }
};
