#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void operate( vector<pair<int, string>> &pairs) {
        int sum = 0;
        string res = "";
        for(auto pair: pairs){
            sum += pair.first;
            res += pair.second;
        }
        cout << sum << endl << res << endl << res.length();
    }
};
