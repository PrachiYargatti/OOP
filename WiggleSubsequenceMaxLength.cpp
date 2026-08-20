#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return n;
        
        int prevDiff = 0;
        int count = 1;
        
        for(int i=1;i<n;i++){
            int diff = nums[i] - nums[i-1];
            if( (diff > 0 && prevDiff <= 0) || (diff < 0 && prevDiff >= 0)){
                count++;
                prevDiff = diff;
            }
        }
        return count;
    }

};
