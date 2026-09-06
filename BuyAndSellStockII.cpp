#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        
        int notHolding = 0; // Max profit when not holding stock
        int holding = -prices[0]; // Max profit when holding stock
        
        for (size_t i = 1; i < prices.size(); ++i) {
            int prevNotHolding = notHolding;
    
            notHolding = max(notHolding, holding + prices[i]);
            holding = max(holding, prevNotHolding - prices[i]);
        }
    
        return notHolding;
    }

};
