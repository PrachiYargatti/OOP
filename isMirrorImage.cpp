#include <bits/stdc++.h>
using namespace std;

class solution {
    private:
    bool isMirror(vector<int>& arr, int left, int right){
        if(left>=right) return true;
        if(arr[left] != arr[right]) return false;
        return isMirror(arr, left+1, right-1);
    }
    public:
    bool isMirrorImage(vector<int>& arr, int n){
        return isMirror(arr, 0, n-1);
    }
};
