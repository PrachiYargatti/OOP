class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int small = nums[0], large = nums[0];

        for(int i=1;i<nums.size();i++){
            if(small>nums[i]){
                small=nums[i];
            }
            else if(large<nums[i]){
                large=nums[i];
            }
        }

        vector<int> res;
        for(int i=small;i<large+1;i++){
            if(count(nums.begin(), nums.end(), i) == 0){
                res.push_back(i);
            }
        }
        return res;
    }
};
