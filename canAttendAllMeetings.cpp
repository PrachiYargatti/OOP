#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    bool canAttendAllMeetings(vector<vector<int>>& schedule) {
        sort(schedule.begin(), schedule.end());
    	int n = schedule.size();
    	int end_time = schedule[0][1];
    	for (int i=1;i<n;i++){
    	    if(schedule[i][0] <= end_time){
    	        return false;
    	    }
    	    end_time = schedule[i][1];
    	}
    	return true;
    }
};
