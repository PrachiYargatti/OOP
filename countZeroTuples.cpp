#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    long long countZeroTuples(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<long long, long long> sumCount;
        
        // Store the frequency of all possible sum pairs from A and B
        for (int a : A) {
            for (int b : B) {
                sumCount[a + b]++;
            }
        }
        
        long long count = 0;
        
        // For each sum pair from C and D, check if -(c + d) exists in the map
        for (int c : C) {
            for (int d : D) {
                long long target = -(static_cast<long long>(c) + d);
                if (sumCount.count(target)) {
                    count += sumCount[target];
                }
            }
        }
        
        return count;   
    }
};
