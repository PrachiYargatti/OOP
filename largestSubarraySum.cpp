#include<bits/stdc++.h>
using namespace std;


class solution {
    public:
        int largestSubarraySum(vector<int>& arr) {
            int maxsum = INT_MIN;
            int currentsum = 0;
            for(int i=0;i<arr.size();i++){
                currentsum += arr[i];
                if(currentsum > maxsum){
                    maxsum = currentsum;
                }
                if(currentsum < 0){
                    currentsum = 0;
                }
            }
            return maxsum;
        
        
        }

};
