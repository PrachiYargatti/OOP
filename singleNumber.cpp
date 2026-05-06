#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int singleNumber(vector<int> &arr) {
        int n = arr.size();
        int ans = 0;
        for (int i=0;i<n;i++){
            ans = ans ^ arr[i];
        }
        return ans;
        
    }

};
