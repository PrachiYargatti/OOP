#include<bits/stdc++.h>
using namespace std;

class solution {
private:
    void findSubsets(int index, vector<int>& arr, vector<int>& current, vector<vector<int>>& ans) {
        // Add the current subset to the answer
        ans.push_back(current);
        
        for (int i = index; i < arr.size(); i++) {
            // Skip duplicate elements at the same recursion level
            if (i > index && arr[i] == arr[i - 1]) {
                continue;
            }
            
            // Include the current element
            current.push_back(arr[i]);
            
            // Move to the next index
            findSubsets(i + 1, arr, current, ans);
            
            // Backtrack to explore other choices
            current.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDuplicates(vector<int> &arr) {
        vector<vector<int>> ans;
        vector<int> current;
        
        // Sort the array to handle duplicates properly
        sort(arr.begin(), arr.end());
        
        // Start the recursive backtracking process
        findSubsets(0, arr, current, ans);
        
        return ans;
    }
};
