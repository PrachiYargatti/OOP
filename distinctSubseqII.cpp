#include <string>
#include <numeric>
#include <vector>

class Solution {
public:
    int distinctSubseqII(std::string s) {
        long last[26] = {0};
        long mod = 1e9 + 7;

        for (char c : s) {
            long total_prev = 0;
            for (int count : last) {
                total_prev = (total_prev + count) % mod;
            }
            // 1 accounts for the single-character subsequence consisting only of `c`
            last[c - 'a'] = (total_prev + 1) % mod;
        }

        long ans = 0;
        for (int count : last) {
            ans = (ans + count) % mod;
        }

        return ans;
    }
};
