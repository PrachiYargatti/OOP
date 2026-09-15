#include <vector>
#include <unordered_map>

using namespace std;

class solution {
public:
    bool checkSubarraySum(const vector<int>& arr, int m) {
        int n = arr.size();
        if (n < 2) return false;

        // Map to store (remainder, first_seen_index)
        // Initialize remainder 0 at index -1 to handle valid subarrays starting from index 0
        unordered_map<long long, int> remainder_map;
        remainder_map[0] = -1;

        long long current_sum = 0;

        for (int i = 0; i < n; ++i) {
            current_sum += arr[i];
            
            long long remainder = current_sum % m;
            if (remainder < 0) {
                remainder += m;
            }

            if (remainder_map.find(remainder) != remainder_map.end()) {
                // If the same remainder was seen before, verify subarray length >= 2
                if (i - remainder_map[remainder] >= 2) {
                    return true;
                }
            } else {
                // Store only the first occurrence of this remainder
                remainder_map[remainder] = i;
            }
        }

        return false;
    }
};
