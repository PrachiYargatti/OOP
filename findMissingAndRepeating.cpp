#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<int> findMissingAndRepeating(vector<int> &arr, int n) {
        unordered_map<int, int> freq;
        
        for(int val: arr){
            freq[val]++;
        }
        
        int repeating = -1;
        for(auto& val: freq){
            if(val.second == 2){
                repeating = val.first;
                break;
            }
        }
        
        int sum = 0;
        for(auto& val: freq){
            sum += val.first;
        }
        
        int missing = (n*(n+1)/2) - sum;
        
        return {repeating, missing};
    }

};
