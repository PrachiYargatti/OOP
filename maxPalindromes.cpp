class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.length();
        int count = 0;
        int last_end = -1;

        for (int i = 0; i < n; ++i) {
            // Expand around center i (odd length) and between i and i+1 (even length)
            for (int j : {i, i + 1}) {
                int left = i;
                int right = j;

                while (left > last_end && right < n && s[left] == s[right]) {
                    if (right - left + 1 >= k) {
                        count++;
                        last_end = right;
                        break;
                    }
                    left--;
                    right++;
                }

                // Greedily pick the first valid palindrome found to minimize ending boundary
                if (last_end == right) break;
            }
        }

        return count;
    }
};
