#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void nextGenerationGrid(vector<vector<int>>& board) {
        if(board.empty()) return;
        
        int m = board.size();
        int n = board[0].size();
        
        vector<pair<int, int>> directions = { {-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1}, {1,-1}, {1,0}, {1,1} };
        
        vector<vector<int>> next_board = board;
        
        for(int r=0;r<m;r++){
            for(int c=0;c<n;c++){
                int live_neighbors = 0;
                
                for(auto& dir: directions){
                    int nr = r + dir.first;
                    int nc = c + dir.second;
                    
                    if (nr >= 0 && nr < m && nc >= 0 && nc < n) {
                        if (board[nr][nc] == 1) {
                            live_neighbors++;
                        }
                    }
                }
                
                // Apply rules
                if (board[r][c] == 1) {
                    if (live_neighbors < 2 || live_neighbors > 3) {
                        next_board[r][c] = 0;
                    }
                } else {
                    if (live_neighbors == 3) {
                        next_board[r][c] = 1;
                    }
                }
            }
        }
        board = next_board;
    }

};
