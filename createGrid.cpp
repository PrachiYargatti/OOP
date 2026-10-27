#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        // Initialize the grid completely filled with obstacles '#'
        vector<string> grid(m, string(n, '#'));
        
        // Open up the first row from left to right
        for (int j = 0; j < n; ++j) {
            grid[0][j] = '.';
        }
        
        // Open up the last column from top to bottom
        for (int i = 0; i < m; ++i) {
            grid[i][n - 1] = '.';
        }
        
        return grid;
    }
};
