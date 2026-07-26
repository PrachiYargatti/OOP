#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int maximizeShareProfit(vector<int> arr){
        int max_profit = 0;
        int min_price = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            // Calculate potential profit if sold on day i
            int current_profit = arr[i] - min_price;
            
            // Update the maximum profit achieved so far
            if (current_profit > max_profit) {
                max_profit = current_profit;
            }
            
            // Keep track of the lowest price seen so far
            if (arr[i] < min_price) {
                min_price = arr[i];
            }
        }

        return max_profit;
    }
};
