#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int conferenceRoomBooking(vector<int>& begin, vector<int>& finish) {
        int n = begin.size();
        vector<pair<int,int>> intervals(n);
        
        for (int i=0;i<n;i++){
            intervals[i] = { finish[i], begin[i] };
        }
        
        sort(intervals.begin(), intervals.end());
        
        int count = 1;
        int end_time = intervals[0].first;
        
        for (int i=0; i<n; i++){
            if(intervals[i].second > end_time){
                count++;
                end_time = intervals[i].first;
            }
        }
        
        return count;
    }
};
