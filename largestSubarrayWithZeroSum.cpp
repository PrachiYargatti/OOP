#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int largestSubarrayWithZeroSum(vector<int> &nums) {
        unordered_map<long long, int> sum_map;
        int n = nums.size();
        long long current_sum = 0;
        int max_len = 0;
        
        for(int i=0;i<n;i++){
            current_sum += nums[i];
            if(current_sum == 0){
                max_len = i+1;
            }
            if(sum_map.find(current_sum) != sum_map.end()){
                max_len = max(max_len, i-sum_map[current_sum]);
            }
            else{
                sum_map[current_sum] = i;
            }
        }
        
        return max_len;
    }

};
