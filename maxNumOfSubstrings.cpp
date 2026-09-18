#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<string> maxNumOfSubstrings(string s) {
        int n = s.length();
        vector<int> l(26, n), r(26, -1);
        
        // Step 1: Track the first and last occurrence of each character
        for (int i = 0; i < n; ++i) {
            int charIdx = s[i] - 'a';
            l[charIdx] = min(l[charIdx], i);
            r[charIdx] = max(r[charIdx], i);
        }
        
        vector<string> result;
        int lastEnd = -1;
        
        // Step 2 & 3: Find valid minimal substrings and greedily select non-overlapping ones
        for (int i = 0; i < n; ++i) {
            // Check if current position is the first occurrence of a character
            if (i == l[s[i] - 'a']) {
                int newRight = checkSubstring(s, i, l, r);
                
                if (newRight != -1) {
                    // If the valid substring starts after the last chosen one, add it
                    if (i > lastEnd) {
                        result.push_back("");
                    }
                    // Keep replacing with shorter valid substrings ending at/before newRight
                    lastEnd = newRight;
                    result.back() = s.substr(i, lastEnd - i + 1);
                }
            }
        }
        
        return result;
    }

private:
    int checkSubstring(const string& s, int left, const vector<int>& l, const vector<int>& r) {
        int right = r[s[left] - 'a'];
        
        for (int i = left; i <= right; ++i) {
            // If an internal character starts before left, this left bound is invalid
            if (l[s[i] - 'a'] < left) {
                return -1;
            }
            // Expand the right bound as needed
            right = max(right, r[s[i] - 'a']);
        }
        
        return right;
    }
};
