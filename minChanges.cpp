#include <string>

using namespace std;

class Solution {
public:
    int minChanges(string s) {
        int changes = 0;
        // Step through the string in blocks of size 2
        for (int i = 0; i < s.length(); i += 2) {
            // If the two adjacent characters don't match, we need 1 change to make them identical
            if (s[i] != s[i + 1]) {
                changes++;
            }
        }
        return changes;
    }
};
