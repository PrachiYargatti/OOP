#include<bits/stdc++.h>
using namespace std;


class solution {
public:
    vector<int> spiralTraversal(vector<vector<int>>& matrix) 
    {
        // time => O(m + n) space => O(1) not consider result arr space
        
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> result;
        int row_delta[] = {0,1,0,-1};
        int col_delta[] = {1,0,-1,0};
        int row = 0;
        int col = 0;
        int pos = 0; //right
        
        while(result.size() != m*n){
            result.push_back(matrix[row][col]);
            matrix[row][col] = 999;
            int new_row = row + row_delta[pos];
            int new_col = col + col_delta[pos];
            
            if(new_row >= m || new_row<0 || new_col >= n || new_col<0 || matrix[new_row][new_col] == 999){
                pos = (pos+1) % 4;
            }
            row += row_delta[pos];
            col += col_delta[pos];
        }
        return result;
    }
};
