class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        if(n<=2) return nums;
        
        vector<int> left_max(n);
        left_max[0] = -1;
        int running_max = nums[0];

        for(int i=1;i<n;++i){
            left_max[i] = running_max;
            running_max = max(running_max, nums[i]);
        }

        vector<int> res;
        int right_max = -1;

        for(int i=n-1;i>=0;--i){
            if(i==0 || i==n-1 || nums[i]>left_max[i] || nums[i]>right_max){
                res.push_back(nums[i]);
            }
            right_max = max(right_max, nums[i]);
        }

        reverse(res.begin(), res.end());
        return res;
    }
};
