#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int countSubarrays(vector<int>& arr, int target) {
        unordered_map<int, int> prefixSumCount;
    
        // Base case: prefix sum of 0 has occurred once (for subarrays starting at index 0)
        prefixSumCount[0] = 1;
        
        int currentSum = 0;
        int count = 0;
        
        for (int num : arr) {
            currentSum += num;
            
            // If (currentSum - target) exists in map, it means we found subarray(s) summing to target
            if (prefixSumCount.find(currentSum - target) != prefixSumCount.end()) {
                count += prefixSumCount[currentSum - target];
            }
            
            // Record the current prefix sum count
            prefixSumCount[currentSum]++;
        }
        
        return count;
    }

};
