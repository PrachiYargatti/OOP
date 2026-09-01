#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<long long> findKeyElements(const vector<int>& arr, int T) {
        int n = arr.size();
        if(n == 0) return {};
        
        vector<long long> res;
        long long rightsum = 0;
        res.push_back(arr[n-1]);
        rightsum += arr[n-1];
        
        for(int i=n-2;i>=0;i--){
            if((long long)arr[i] - rightsum > T){
                res.push_back(arr[i]);
            }
            rightsum += arr[i];
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }

};
