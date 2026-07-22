#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void moveZerosToFront(int arr[], int n){
        int count = 0;
        int j = n-1;
        for(int i=n-1;i>=0;i--){
            if(arr[i] != 0){
                arr[j]=arr[i];
                j--;
            }
            else{
                count++;
            }
        }
        
        for(int i=0;i<count;i++){
            arr[i]=0;
        }
    }
};
