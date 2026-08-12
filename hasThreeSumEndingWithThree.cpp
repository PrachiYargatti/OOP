#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    string hasThreeSumEndingWithThree(vector<int>& arr) {
        vector<int> counts(10, 0);
        vector<int> lastDigits;
        
        for (int x : arr) {
            int d = abs(x) % 10;
            if (counts[d] < 3) {
                counts[d]++;
                lastDigits.push_back(d);
            }
        }
        
        int n = lastDigits.size();
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    if ((lastDigits[i] + lastDigits[j] + lastDigits[k]) % 10 == 3) {
                        return "YES";
                    }
                }
            }
        }
        return "NO";
    }
};
