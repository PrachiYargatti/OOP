#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int maxPairSum(vector<int>& arr, int n) {
        if(n<2) return -1;
        
        int max_sum = 0;
        int cur_sum = 0;
        for(int i=0;i<n-1;i++){
            cur_sum = arr[i]+arr[i+1];
            if(cur_sum > max_sum){
                max_sum=cur_sum;
            }
        }
        
        return max_sum;
    }

};
