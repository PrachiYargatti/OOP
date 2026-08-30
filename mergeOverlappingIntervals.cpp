#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &nums) {
        int n = nums.size();
        if(n <= 1) return nums;
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        
        int start = nums[0][0];
        int end = nums[0][1];
        
        for(int i=1;i<n;i++){
            if(nums[i][0] <= end){
                end = max(end, nums[i][1]);
            }
            else{
                res.push_back({start, end});
                start = nums[i][0];
                end = nums[i][1];
            }
        }
        res.push_back({start, end});
        
        return res;
    }

};
