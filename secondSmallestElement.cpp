#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int secondSmallestElement(int arr[], int n){
        int small = arr[0];
        int secSmall = -1;
        for (int i=0;i<n;i++){
            if (arr[i] < small){
                secSmall = small;
                small = arr[i];
            }
            else if (secSmall > arr[i] && small < arr[i]){
                secSmall = arr[i];
            }
        }
        return secSmall;
    }
};
