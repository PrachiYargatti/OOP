#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    bool isSorted(int arr[],int n){
        for (int i=0;i<n-1;i++){
            if (arr[i]>arr[i+1]){
                return false;
            }
        }
        return true;
    }
};
