#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> rotateArray(vector<int>& nums, int x, int y) {
        int n = nums.size();
        if(n==0) return nums;
        
        int net = (x-y) % n;
        if(net < 0){
            net += n;
        }
        if(net == 0) return nums;
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+net);
        reverse(nums.begin()+net, nums.end());
        
        return nums;
    }
};
