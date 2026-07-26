#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int> getSortedSquares(vector<int>& arr) {
        int n = arr.size();
        vector<int> result(n);
        
        int left = 0, right = n - 1;
        int pos = n - 1;

        while(left <= right){
            if(abs(arr[left]) > abs(arr[right])){
                result[pos] = arr[left] * arr[left];
                left++;
            } else {
                result[pos] = arr[right] * arr[right];
                right--;
            }
            pos--;
        }
        
        return result;
    }
};
