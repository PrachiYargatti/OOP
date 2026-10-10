#include <bits/stdc++.h>
using namespace std;

class solution {
private:
    void reverseSection(vector<int>& arr, int left, int right){
        if(left >= right) return;
        swap(arr[left], arr[right]);
        reverseSection(arr, left+1, right-1);
    }
public:
    void reverseArraySection(vector<int>& arr, int left, int right) {
        reverseSection(arr, left, right);
    }
};
