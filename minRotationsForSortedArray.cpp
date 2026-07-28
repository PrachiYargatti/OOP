#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int minRotations(int arr[], int n){
        int low = 0, high = n - 1;
        
        while (low <= high) {
            // Case 1: Subarray is already sorted
            if (arr[low] <= arr[high]) {
                return low;
            }
            
            int mid = low + (high - low) / 2;
            int next = (mid + 1) % n;
            int prev = (mid + n - 1) % n;
            
            // Case 2: Check if mid is the minimum element
            if (arr[mid] <= arr[next] && arr[mid] <= arr[prev]) {
                return mid;
            }
            
            // Case 3: Decide which half to search
            if (arr[mid] <= arr[high]) {
                high = mid - 1; // Minimum is in the left half
            } else {
                low = mid + 1;  // Minimum is in the right half
            }
        }
        
        return 0;
    }
};
