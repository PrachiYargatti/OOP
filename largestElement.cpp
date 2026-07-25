#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int largestElement(int arr[], int n){
        int max = arr[0];
        for(int i=1; i<n; i++){
            if (arr[i] > max){
                max = arr[i];
            }
        }
        return max;
    }
};
