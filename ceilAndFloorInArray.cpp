#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int arrayCeil(int arr[], int n, int k) {
        int low = 0, high = n - 1;
        int ceilVal = -1; // Default if no ceil exists
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] >= k) {
                ceilVal = arr[mid]; // Potential ceil
                high = mid - 1;   // Look for a smaller element on the left
            } else {
                low = mid + 1;    // Look on the right
            }
        }
        return ceilVal;
    }
    
    int arrayFloor(int arr[], int n, int k){
        int low = 0, high = n - 1;
        int floorVal = -1; // Default if no floor exists
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] <= k) {
                floorVal = arr[mid]; // Potential floor
                low = mid + 1;     // Look for a larger element on the right
            } else {
                high = mid - 1;    // Look on the left
            }
        }
        return floorVal;
    }
};
