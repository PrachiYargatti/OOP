#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int smallestElement(int arr[], int n){
        int small = arr[0];
        for (int i=1; i<n; i++){
            if (small > arr[i]){
                small = arr[i];
            }
        }
        return small;
        
    }
};
