#include<bits/stdc++.h>
using namespace std;


class solution {
    public:
         vector<vector<int>> rotateGrid(vector<vector<int>> &matrix) {
                int n = matrix.size();
                
                // Step 1: Transpose the matrix
                for(int i=0;i<n;i++){
                    for(int j=i+1;j<n;j++){
                        swap(matrix[i][j], matrix[j][i]);
                    }
                }
                
                // step 2: Reverse each row 
                for(int i=0;i<n;i++){
                    reverse(matrix[i].begin(), matrix[i].end());
                }
                
                return matrix;
        }

};
