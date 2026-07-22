#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int secondLargestElement(int arr[], int n){
        int max = arr[0]; 
        int secMax = -1;
        for (int i=1; i<n; i++){
            if(arr[i] > max){
                secMax = max;
                max = arr[i];
            }
            else if(secMax < arr[i] && max > arr[i]){
                secMax = arr[i];
            }
        }
        return secMax;
        
    }
};
