#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    long countCandyGroups(int maximumSweetness, vector<int>& candies) {
        if (maximumSweetness <= 1) return 0;

        long count = 0;
        long long currentProduct = 1;
        int left = 0;

        for (int right = 0; right < candies.size(); right++) {
            currentProduct *= candies[right];

            // Shrink the window from the left if product >= maximumSweetness
            while (left <= right && currentProduct >= maximumSweetness) {
                currentProduct /= candies[left];
                left++;
            }

            // The number of valid contiguous subarrays ending at 'right' is (right - left + 1)
            count += (right - left + 1);
        }

        return count;
    }
};
