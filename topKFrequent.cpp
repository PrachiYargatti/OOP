#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> freq;
        for(int num: arr){
            freq[num]++;
        }
        
        // Buckets where index represents frequency (0 to n)
        vector<vector<int>> buckets(n + 1);
        for (auto& entry : freq) {
            buckets[entry.second].push_back(entry.first);
        }

        // Gather the top K elements starting from the highest frequency
        vector<int> res;
        for (int i = n; i >= 0 && res.size() < k; i--) {
            for (int num : buckets[i]) {
                res.push_back(num);
                if (res.size() == k) break;
            }
        }

        return res;
        
        // unordered_map<int, int> freq;
        // for(int num: arr){
        //     freq[num]++;
        // }
        
        // vector<pair<int, int>> freqVec(freq.begin(), freq.end());
        
        // sort(freqVec.begin(), freqVec.end(), [](const pair<int, int>& a, const pair<int, int>& b){
        //     return a.second > b.second;
        // });
        
        // vector<int> res;
        // for(int i=0; i<k && i<freqVec.size(); i++){
        //     res.push_back(freqVec[i].first);
        // }
        // return res;
    }
};
