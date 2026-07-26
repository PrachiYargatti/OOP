#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int> getDominants(vector<int>& arr) {
        int n = arr.size();
        if(n==0) return {};
        
        vector<int> res;
        int max_so_far = INT_MIN;
        
        for(int i=n-1;i>=0;i--){
            if(arr[i] >= max_so_far){
                res.push_back(arr[i]);
                max_so_far = arr[i];
            } 
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};
