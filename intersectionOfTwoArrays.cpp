class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Insert all elements from nums1 into a set for O(1) lookup
        unordered_set<int> set1(nums1.begin(), nums1.end());
        vector<int> res;

        for(int num : nums2){
            if(set1.count(num)){
                res.push_back(num);
                // Erase to ensure duplicate values in nums2 are not added again
                set1.erase(num);
            }
        }

        return res;
    }
};
