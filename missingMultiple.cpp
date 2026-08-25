class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int multiple = k;

        while(find(nums.begin(), nums.end(), multiple) != nums.end()) {
            multiple += k;
        }

        return multiple;

        // unordered_set<int> seen(nums.begin(), nums.end());
        // int multiple = k;

        // while(seen.contains(multiple)){
        //     multiple += k;
        // }

        // return multiple;
    }
};
