#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int singleNumber(vector<int> &arr) {
        int result = 0;
        
        // Iterate through all 32 possible bit positions
        for (int i = 0; i < 32; i++) {
            int bitSum = 0;
            
            // Count how many numbers have the i-th bit set
            for (int num : arr) {
                if ((num >> i) & 1) {
                    bitSum++;
                }
            }
            
            // If the sum is not a multiple of 3, this bit belongs to the single number
            if (bitSum % 3 != 0) {
                result |= (1 << i);
            }
        }
        
        return result;
    }
};

// Time Complexity : O(32 * n) = O(n)
// Space Complexity : O(1)
