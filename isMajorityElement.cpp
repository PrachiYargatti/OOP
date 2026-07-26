#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    bool isMajorityElement(vector<int>& arr, int k) {
        int n = arr.size();
        int max_count = ceil(n/2);
        int count = 0;
        
        for(int i=0;i<n;i++){
            if(arr[i] == k){
                count++;
            }
        }
        
        return count>=max_count;
    }
};
