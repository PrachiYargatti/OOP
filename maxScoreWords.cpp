#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        // Count the availability of each letter
        vector<int> letterCount(26, 0);
        for (char c : letters) {
            letterCount[c - 'a']++;
        }
        
        int maxScore = 0;
        int n = words.size();
        
        // Iterate through all possible subsets of words using a bitmask
        // Total subsets = 2^n
        for (int mask = 0; mask < (1 << n); ++mask) {
            vector<int> currentCount(26, 0);
            int currentScore = 0;
            bool isValid = true;
            
            // Check each word in the current subset
            for (int i = 0; i < n; ++i) {
                if ((mask >> i) & 1) {
                    for (char c : words[i]) {
                        int idx = c - 'a';
                        currentCount[idx]++;
                        currentScore += score[idx];
                        
                        // If we exceed the available letters, this subset is invalid
                        if (currentCount[idx] > letterCount[idx]) {
                            isValid = false;
                            break;
                        }
                    }
                }
                if (!isValid) break;
            }
            
            // Update the maximum score if the subset is valid
            if (isValid) {
                maxScore = max(maxScore, currentScore);
            }
        }
        
        return maxScore;
    }
};
