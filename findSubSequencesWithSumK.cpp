#include <bits/stdc++.h>
using namespace std;

class solution{
private:
    void solve(int index, int arr[], int n, int target, vector<int>& curr, vector<vector<int>>& res){
        if(index == n){
            if(target == 0){
                res.push_back(curr);
            }
            return;
        }
        
        if(arr[index] <= target){
            curr.push_back(arr[index]);
            solve(index+1, arr, n, target-arr[index], curr, res);
            curr.pop_back(); //backtrack
        }
        
        solve(index+1, arr, n, target, curr, res);
    }

public:
    vector<vector<int>> findSubSequencesWithSumK(int arr[], int n, int k) {
        //Write your code here...
        vector<vector<int>> res;
        vector<int> curr;
        solve(0,arr,n,k,curr,res);
        return res;
    }
};
