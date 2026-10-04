class Solution {
public:
    bool checkValidString(string s) {
        int minOpen = 0; // Minimum possible open '(' count
        int maxOpen = 0; // Maximum possible open '(' count

        for (char c : s) {
            if (c == '(') {
                minOpen++;
                maxOpen++;
            } else if (c == ')') {
                minOpen--;
                maxOpen--;
            } else { // c == '*'
                minOpen--; // Treat '*' as ')'
                maxOpen++; // Treat '*' as '('
            }

            // More ')' than possible '(' and '*' combined
            if (maxOpen < 0) {
                return false;
            }

            // minOpen cannot be negative since we can treat excess '*' as empty string ""
            minOpen = max(minOpen, 0);
        }

        // Valid if it's possible to balance all '('
        return minOpen == 0;
    }
};
