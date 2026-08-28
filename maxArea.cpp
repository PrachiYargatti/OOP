#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int maxArea(vector<int> &level) {
        int n = level.size();
        int max_water = 0;
        int left = 0, right = n-1;
        
        while(left < right){
            int currentHeight = min(level[left] , level[right]);
            int currentWidth = right - left;
            int currentArea = currentHeight * currentWidth;
            
            max_water = max(currentArea, max_water);
            
            if(level[left] < level[right]){
                left++;
            }else{
                right--;
            }
        }
        
        return max_water;
    }

};
