class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        
        // last[i] stores the max length of a suffix of word2 
        // that can be matched using a subsequence of word1[i...n-1]
        vector<int> last(n + 1, 0);
        int j = m - 1;
        for (int i = n - 1; i >= 0; --i) {
            if (j >= 0 && word1[i] == word2[j]) {
                j--;
            }
            last[i] = m - 1 - j;
        }

        vector<int> ans;
        bool used_mismatch = false;
        j = 0; // index for word2

        for (int i = 0; i < n && j < m; ++i) {
            // Case 1: Exact match
            if (word1[i] == word2[j]) {
                ans.push_back(i);
                j++;
            } 
            // Case 2: Mismatch, but we haven't used our 1 mismatch yet
            else if (!used_mismatch && last[i + 1] >= m - 1 - j) {
                ans.push_back(i);
                j++;
                used_mismatch = true; // consume the 1 allowed change
            }
        }

        return (ans.size() == m) ? ans : vector<int>{};
    }
};
