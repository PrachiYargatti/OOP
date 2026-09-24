#include <bits/stdc++.h>
using namespace std;

class solution {
private:
    bool canTransport(const vector<int>& loads, int d, int capacity) {
        int daysNeeded = 1;
        int currentWeight = 0;
        
        for (int weight : loads) {
            if (currentWeight + weight > capacity) {
                daysNeeded++;
                currentWeight = weight;
            } else {
                currentWeight += weight;
            }
        }
        
        return daysNeeded <= d;
    }

public:
    int transportParcels(vector<int>& loads, int d) {
        int low = *max_element(loads.begin(), loads.end());
        int high = accumulate(loads.begin(), loads.end(), 0);
        int result = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canTransport(loads, d, mid)) {
                result = mid;      // Found a feasible capacity, try finding a smaller one
                high = mid - 1;
            } else {
                low = mid + 1;     // Capacity too small, increase minimum bound
            }
        }

        return result;
    }
};
