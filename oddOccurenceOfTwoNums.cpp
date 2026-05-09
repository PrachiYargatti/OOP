#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<int> oddOccurence(vector<int> &arr){
        int n = arr.size();
        int xor_all = 0;
        
        // Step 1: XOR all elements to get (x ^ y)
        for(int i = 0; i < n; i++){
            xor_all ^= arr[i];
        }
        
        // Step 2: Find the rightmost set bit
        // Use long long to avoid overflow edge cases with INT_MIN
        int rightmost_set_bit = xor_all & ~(xor_all - 1);
        
        int first_num = 0;
        int second_num = 0;
        
        // Step 3: Divide elements into two groups based on the set bit
        for(int i = 0; i < n; i++){
            if(arr[i] & rightmost_set_bit) {
                first_num ^= arr[i]; // Group with bit set
            } else {
                second_num ^= arr[i]; // Group with bit not set
            }
        }
        
        // Return results in descending order
        if (first_num > second_num) {
            return {first_num, second_num};
        }
        return {second_num, first_num};
    }
};
