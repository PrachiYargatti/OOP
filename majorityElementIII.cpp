#include<bits/stdc++.h>
using namespace std;


class solution {
public:
    vector<int> majorityElement(vector<int>& arr) 
    {
        int n = arr.size();
        unordered_map<int, int> freq;
        
        for(int num: arr){
            freq[num]++;
        }
        
        vector<int> res;
        for(auto& pair: freq){
            if(pair.second > floor(n/3)){
                res.push_back(pair.first);
            }
        }
        return res;
    }
};
