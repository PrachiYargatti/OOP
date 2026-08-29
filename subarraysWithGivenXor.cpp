#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int subarraysWithGivenXor(vector<int> &nums, int k) {
        unordered_map<int, int> visited_xors;
        int xr = 0;
        int total_subarray = 0;
        
        visited_xors[0] = 1;
        for(int i=0;i<nums.size();i++){
            xr = xr^nums[i];
            int target = xr^k;
            
            if(visited_xors.find(target) != visited_xors.end()){
                total_subarray += visited_xors[target];
            }
            
            visited_xors[xr]++;
        }
        
        return total_subarray;
        
        
        
        
    }

};
