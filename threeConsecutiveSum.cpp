#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<int> threeConsecutiveSum(int k) {
        if(k%3 == 0){
            int x = k/3;
            return {x-1,x,x+1};
        }
        return {};
    }

};
