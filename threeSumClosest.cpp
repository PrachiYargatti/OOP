#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        int closestSum = arr[0]+arr[1]+arr[2];
        
        for(int i=0; i<n-2; i++){
            int left = i+1;
            int right = n-1;
            
            while(left<right){
                int currSum = arr[i]+arr[left]+arr[right];
                if(currSum == target){
                    return currSum;
                }
                
                if(abs(currSum - target) < abs(closestSum - target)){
                    closestSum = currSum;
                }
                
                if(currSum <  target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return closestSum;
    }

};
