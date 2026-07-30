#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int numberOfOccurences(int arr[],int n, int k) {
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                count++;
            }
        }
        return count;
    }
};
