#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int rowWithMaxOnes(vector<vector<int>> &matrix) {
        int max_count=0, res_index=-1;
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        for(int i=0;i<rows;i++){
            int one_count=0;
            for(int j=0;j<cols;j++){
                if(matrix[i][j] == 1){
                    one_count++;
                }
            }
            if(one_count>max_count){
                max_count=one_count;
                res_index = i;
            }
        }
        return res_index;
        
    }

};
