#include <vector>
#include <string>
#include <queue>
#include <tuple>

using namespace std;

class Solution {
public:
    int minMoves(vector<string>& classroom, int maxEnergy) {
        int m = classroom.size();
        int n = classroom[0].size();
        
        int startX = -1, startY = -1;
        vector<pair<int, int>> litter;
        
        // Parse the grid to locate 'S' and all 'L' cells
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (classroom[i][j] == 'S') {
                    startX = i;
                    startY = j;
                } else if (classroom[i][j] == 'L') {
                    litter.push_back({i, j});
                }
            }
        }
        
        int k = litter.size();
        int targetMask = (1 << k) - 1;
        
        // If there is no litter to collect, 0 moves are needed
        if (targetMask == 0) return 0;

        // bestEnergy[x][y][mask] stores the maximum remaining energy seen for state (x, y, mask)
        vector<vector<vector<int>>> bestEnergy(m, vector<vector<int>>(n, vector<int>(1 << k, -1)));

        // Queue element: {x, y, mask, remaining_energy, steps}
        queue<tuple<int, int, int, int, int>> q;
        
        q.push({startX, startY, 0, maxEnergy, 0});
        bestEnergy[startX][startY][0] = maxEnergy;

        int dirs[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        while (!q.empty()) {
            auto [x, y, mask, e, steps] = q.front();
            q.pop();

            // If a state with strictly higher energy was already reached, skip processing
            if (e < bestEnergy[x][y][mask]) continue;

            for (auto& dir : dirs) {
                int nx = x + dir[0];
                int ny = y + dir[1];

                // Check bounds and obstacle collision
                if (nx < 0 || nx >= m || ny < 0 || ny >= n || classroom[nx][ny] == 'X') {
                    continue;
                }

                int nextEnergy = e - 1;
                if (nextEnergy < 0) continue; // Out of energy before reaching the cell

                int nextMask = mask;
                char cell = classroom[nx][ny];

                // Reset energy if stepping on 'R'
                if (cell == 'R') {
                    nextEnergy = maxEnergy;
                } 
                // Collect litter if stepping on 'L'
                else if (cell == 'L') {
                    for (int i = 0; i < k; ++i) {
                        if (litter[i].first == nx && litter[i].second == ny) {
                            nextMask |= (1 << i);
                            break;
                        }
                    }
                }

                // Check if all litter items have been collected
                if (nextMask == targetMask) {
                    return steps + 1;
                }

                // Only enqueue if this path achieves higher remaining energy for this (cell, mask)
                if (nextEnergy > bestEnergy[nx][ny][nextMask]) {
                    bestEnergy[nx][ny][nextMask] = nextEnergy;
                    q.push({nx, ny, nextMask, nextEnergy, steps + 1});
                }
            }
        }

        return -1; // Target unreachable
    }
};
