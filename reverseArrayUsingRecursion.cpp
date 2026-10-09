#include <bits/stdc++.h>
using namespace std;

class solution{
private: 
    void reverseArray(int arr[], int i, int n){
        if(i >= n/2) return;
        swap(arr[i], arr[n-i-1]);
        reverseArray(arr, i+1, n);
    }
public:
    void reverse(int arr[], int N){
        reverseArray(arr, 0, N);
    }
};
