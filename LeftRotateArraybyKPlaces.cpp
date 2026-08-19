#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void leftRotate(int arr[], int n, int k){
        //Write your code here...
        k=k%n;
        if(k==0) return;
        reverse(arr, arr+k);
        reverse(arr+k, arr+n);
        reverse(arr, arr+n);
    }
};
