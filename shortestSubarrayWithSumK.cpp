#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int shortestSubarrayWithSumK(int arr[], int n, int k) {
        //Write your code here...
        unordered_map<int, int> prefixSum;
        int currentSum = 0, min_len = INT_MAX;
        
        for(int i=0; i<n; i++){
            currentSum += arr[i];
            
            if(currentSum == k){
                min_len = min(min_len, i+1);
            }
            
            if(prefixSum.find(currentSum - k) != prefixSum.end()){
                min_len = min(min_len, i - prefixSum[currentSum-k]);
            }
            
            // Crucial fix: Always update with the LATEST index for the shortest subarray
            prefixSum[currentSum] = i;
        }
        return min_len == INT_MAX ? -1 : min_len;
    }
};
