#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool findRotation(int n, vector<vector<int>>& start, vector<vector<int>>& goal) {
        bool rot0 = true, rot90 = true, rot180 = true, rot270 = true;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(start[i][j] != goal[i][j]){
                    rot0 = false;
                }
                if(start[i][j] != goal[j][n-1-i]){
                    rot90 = false;
                }
                if(start[i][j] != goal[n-1-i][n-1-j]){
                    rot180 = false;
                }
                if(start[i][j] != goal[n-1-j][i]){
                    rot270 = false;
                }
            }
        }
        
        if(rot0 || rot90 || rot180 || rot270){
            return true;
        }
        return false;
        
    }

};
