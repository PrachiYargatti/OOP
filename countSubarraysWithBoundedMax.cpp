#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int countSubarraysWithBoundedMax(vector<int>& arr, int minBound, int maxBound) {
        int n = arr.size();
        int left = -1;
        int right = -1;
        int count = 0;
        
        for(int i=0; i<n; i++){
            if(arr[i] > maxBound){
                left = i;
                right = i;
            }
            else if(arr[i] >= minBound){
                right = i;
            }
            count += (right-left);
        }
        
        return count;
    }
};
