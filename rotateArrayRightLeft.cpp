#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> rotateArray(vector<int>& nums, int x, int y) {
        if(x==y) return nums;
        int n = nums.size();
        
        if(x>y){
            x=x-y;
            while(x--){
                int last = nums[n-1];
                for(int i=n-1;i>0;i--){
                    nums[i] = nums[i-1];
                }
                nums[0] = last; 
            }
            return nums;
        }
        
        if(y>x){
            y=y-x;
            while(y--){
                int first = nums[0];
                for(int i=0;i<n-1;i++){
                    nums[i] = nums[i+1];
                }
                nums[n-1] = first; 
            }
            return nums;
        }
        
    }
};
