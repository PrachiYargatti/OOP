#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int minimumMeetingRooms(vector<vector<int>>& times) {
        if(times.empty()) return 0;
        sort(times.begin(), times.end());
        
        priority_queue<int,vector<int>,greater<int>> pq; //greater<int> => used for min heap and less<int> => used for max heaf and it is by default

        pq.push(times[0][1]);

        for(int i = 1; i < times.size(); i++) {
            if(times[i][0] >= pq.top()) {
                pq.pop();      // reuse room
            }
            pq.push(times[i][1]);
        }
        
        return pq.size();
    }
};
