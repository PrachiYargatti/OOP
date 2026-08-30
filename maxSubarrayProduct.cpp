#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int maxProduct(vector<int>& arr) {
        int n = arr.size();
        int maxProd = INT_MIN;
        int prefix = 1, suffix = 1;
        
        for(int i=0;i<n;i++){
            if(prefix == 0) prefix = 1;
            if(suffix == 0) suffix = 1;
            
            prefix *= arr[i];
            suffix *= arr[n-1-i];
            
            maxProd = max(maxProd, max(prefix, suffix));
        }
        
        return maxProd;
    }
};
