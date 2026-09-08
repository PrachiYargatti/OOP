#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class solution {
private:
    void backtrack(int index, vector<int>& arr, vector<vector<int>>& ans) {
        if (index == arr.size()) {
            ans.push_back(arr);
            return;
        }

        for (int i = index; i < arr.size(); i++) {
            swap(arr[index], arr[i]);
            backtrack(index + 1, arr, ans);
            swap(arr[index], arr[i]); // backtrack
        }
    }

public:
    vector<vector<int>> permute(vector<int>& arr) {
        vector<vector<int>> ans;
        // Sort initially if output needs to start in lexicographical order
        sort(arr.begin(), arr.end());
        backtrack(0, arr, ans);
        return ans;
    }
};
