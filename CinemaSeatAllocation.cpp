class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, int> mp;

        for(const auto& seat: reservedSeats){
            int row=seat[0], col=seat[1];

            if(col>=2 && col<=9){
                mp[row] = mp[row] | (1 << (col-2));
            }
        }

        int total_groups = (n-mp.size()) * 2;

        int left_mask = 15;
        int right_mask = 240;
        int middle_mask = 60;

        for(const auto& [row,mask] : mp){
            bool can_left = (mask & left_mask) == 0;
            bool can_right = (mask & right_mask) == 0;
            bool can_middle = (mask & middle_mask) == 0;

            if (can_left && can_right) {
                total_groups += 2;
            } else if (can_left || can_right || can_middle) {
                total_groups += 1;
            }
        }
        return total_groups;
    }
};
