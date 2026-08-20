#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void makeRowZero(vector<vector<int>>& matrix, int row){
        int col = matrix[row].size();
        for (int i=0; i<col; i++){
            matrix[row][i] = 0;
        }
    }
    void makeColZero(vector<vector<int>>& matrix, int col){
        int row = matrix.size();
        for (int i=0; i<row; i++){
            matrix[i][col] = 0;
        }
    }
    void zeroFill(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        vector<vector<int>> temp(row, vector<int>(col, 0));
        
        for (int i=0; i<row; i++){
            for (int j=0; j<col; j++){
                if(matrix[i][j]==0){
                    temp[i][j] = 1;
                }
            }
        }
        
        for (int i=0; i<row; i++){
            for (int j=0; j<col; j++){
                if(temp[i][j]==1){
                    makeRowZero(matrix, i);
                    makeColZero(matrix, j);
                }
            }
        }
    }
};
