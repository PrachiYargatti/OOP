#include <bits/stdc++.h>
using namespace std;

class solution {
private:
    bool dfs(vector<vector<char>>& mat, string& s, int r, int c, int index) {
        // Base case: if we matched all characters
        if (index == s.length()) {
            return true;
        }

        int n = mat.size();
        int m = mat[0].size();

        // Boundary checks and character match check
        if (r < 0 || r >= n || c < 0 || c >= m || mat[r][c] != s[index]) {
            return false;
        }

        // Mark cell as visited by temporarily modifying its value
        char temp = mat[r][c];
        mat[r][c] = '#';

        // Explore all 4 orthogonal directions: down, up, right, left
        bool found = dfs(mat, s, r + 1, c, index + 1) ||
                     dfs(mat, s, r - 1, c, index + 1) ||
                     dfs(mat, s, r, c + 1, index + 1) ||
                     dfs(mat, s, r, c - 1, index + 1);

        // Backtrack: restore the cell's original character
        mat[r][c] = temp;

        return found;
    }

public:
    bool wordSearch(vector<vector<char>>& mat, string s) {
        int n = mat.size();
        if (n == 0) return false;
        int m = mat[0].size();

        // Try starting the search from every cell in the matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == s[0] && dfs(mat, s, i, j, 0)) {
                    return true;
                }
            }
        }

        return false;
    }
};
