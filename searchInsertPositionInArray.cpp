#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int searchInsertPosition(int arr[], int n, int k) {
        
        int low = 0;
        int high = n - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] == k) {
                return mid; // Target found
            } else if (arr[mid] < k) {
                low = mid + 1; // Search right half
            } else {
                high = mid - 1; // Search left half
            }
        }
        
        // If not found, low points to the correct insert position
        return low;
        
    }
};
