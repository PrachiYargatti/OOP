#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int longestSubarrayWithSumK(int arr[], int n, int k){
        int left = 0;
        int maxLength = 0;
        int currSum = 0;
        
        for(int right=0;right<n;right++){
            currSum += arr[right];
            
            while(currSum > k && left<=right){
                currSum -= arr[left];
                left++;
            }
            
            if(currSum == k){
                maxLength = max(maxLength, right-left+1);
            }
        }
        return maxLength;
    }
};
