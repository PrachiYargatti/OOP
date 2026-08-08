class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        vector<int> leftsum;
        leftsum.push_back(0);
        vector<int> rightsum;
        rightsum.push_back(0);

        for(int i=1;i<n;i++){
            sum += nums[i-1];
            leftsum.push_back(sum);
        }

        sum = 0;
        for(int i=n-2;i>=0;i--){
            sum += nums[i+1];
            rightsum.push_back(sum);
        }

        reverse(rightsum.begin(), rightsum.end());

        for(int i=0;i<n;i++){
            nums[i] = abs(leftsum[i] - rightsum[i]);
        }

        return nums;
    }
};
