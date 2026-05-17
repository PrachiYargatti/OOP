#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int findDuplicate(vector<int> &arr) {
        int n = arr.size() - 1;
        int duplicate = 0;
        
        // Iterate through all possible bit positions (up to 32 for integers)
        for (int bit = 0; bit < 32; bit++) {
            int mask = (1 << bit);
            int base_count = 0;
            int arr_count = 0;
            
            // Count set bits for the range [1, n] and the array elements
            for (int i = 0; i <= n; i++) {
                // Count bits in the perfect range [1, n]
                if (i > 0 && (i & mask)) {
                    base_count++;
                }
                // Count bits in the actual array
                if (arr[i] & mask) {
                    arr_count++;
                }
            }
            
            // If the array has more set bits at this position, 
            // this bit must be part of the duplicate number.
            if (arr_count > base_count) {
                duplicate |= mask;
            }
        }
        
        return duplicate;
            }
};

// Time Complexity : O(n * log k)
// Space Complexity : O(1)
