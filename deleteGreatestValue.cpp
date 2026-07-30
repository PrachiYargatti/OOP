class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        for(int i=0;i<m;++i){
            sort(grid[i].begin(), grid[i].end());
        }

        int total_ans=0;

        for(int col=0;col<n;++col){
            int max_in_col=0;
            for(int row=0;row<m;++row){
                max_in_col = max(max_in_col, grid[row][col]);
            }
            total_ans += max_in_col;
        }
        return total_ans;
    }
};
