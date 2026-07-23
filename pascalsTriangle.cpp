#include<bits/stdc++.h>
using namespace std;


class solution {
public:
    vector<vector<int>> pascalsTriangle(int n) 
    {
        vector<vector<int>> res;
        
        for(int i=0;i<n;i++){
            //create row of size i+1, initialized with 1's
            vector<int> row(i+1, 1);
            for(int j=1;j<i;j++){
                row[j]=res[i-1][j-1] + res[i-1][j];
            }
            res.push_back(row);
        }
        
        return res;
    }
};
