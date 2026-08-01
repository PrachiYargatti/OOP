#include <bits/stdc++.h>
using namespace std;

class solution {
public:
     bool hasQuickRepeatOrder(vector<int>& orders, int k) {
        unordered_set<int> window;
        
        for(int i=0;i<orders.size();i++){
            if(window.count(orders[i])){
                return true;
            }
            window.insert(orders[i]);
            if(window.size() > k){
                window.erase(orders[i-k]);
            }
        }
        return false;
    }
};
