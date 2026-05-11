#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int minOperations(vector<int> &nums, int k) {
        int xr = 0;
        
        for (int i=0;i<nums.size();i++){
            xr ^= nums[i];
        }
        
        int ans = 0;
        int val = xr ^ k;
        
        while(val != 0){
            ans += (val & 1);
            val = val >> 1;
        }
        
        return ans;
    }

};
