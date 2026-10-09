class Solution {
public:
    int minInsertions(string s) {
        int insertions = 0;
        int open_needed = 0; // Tracks unmatched '('

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                open_needed++;
            } else {
                // Check if we have a pair of '))'
                if (i + 1 < s.length() && s[i + 1] == ')') {
                    i++; // Consume the second ')'
                } else {
                    insertions++; // Missing a ')', so insert one
                }

                // Balance with an opening '(' if available, otherwise insert a '('
                if (open_needed > 0) {
                    open_needed--;
                } else {
                    insertions++; // Insert '('
                }
            }
        }

        // Each remaining unmatched '(' needs '))'
        insertions += open_needed * 2;

        return insertions;
    }
};
