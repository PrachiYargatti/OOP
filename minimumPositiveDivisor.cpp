#include <bits/stdc++.h>
using namespace std;

class solution{
private:
    long long sumOfDiv(int arr[], int n, int mid){
        long long  sum = 0;
        for(int i=0;i<n;i++){
            sum += ceil(double(arr[i])/double(mid));
        }
        return sum;
    }
public:
    int minimumPositiveDivisor (int arr[], int n, int limit){
        int low = 1;
        int high = *max_element(arr, arr+n);
        int ans = high;
        while(low<=high){
            int mid = (low+high)/2;
            if(sumOfDiv(arr, n, mid) <= limit){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};
