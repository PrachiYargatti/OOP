#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<vector<int>> powerSet(vector<int>& arr) {
        vector<vector<int>> ans;
        int n = arr.size();
        for (int num = 0; num < (1 << n); num++) {
            vector<int> temp;
            for (int i = 0; i < n; i++) {
                if (num & (1 << i)) {
                    temp.push_back(arr[i]);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }

};
//Time Complexity : O(2^n * n)
//Space Complexity : O(2^n * n)
