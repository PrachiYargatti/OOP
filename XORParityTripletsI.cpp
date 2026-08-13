#include <iostream>
#include <vector>

using namespace std;

class solution {
public:
    void countParity(const vector<int>& arr, long long& evenCount, long long& oddCount) {
        evenCount = 0;
        oddCount = 0;
        for (int val : arr) {
            // __builtin_popcount returns the number of set bits (1s)
            if (__builtin_popcount(val) % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }

    long long countEvenParityTriplets(const vector<int>& firstValues, 
                                     const vector<int>& secondValues, 
                                     const vector<int>& thirdValues) {
        long long e1 = 0, o1 = 0;
        long long e2 = 0, o2 = 0;
        long long e3 = 0, o3 = 0;

        countParity(firstValues, e1, o1);
        countParity(secondValues, e2, o2);
        countParity(thirdValues, e3, o3);

        // XOR of 3 numbers has even parity if the count of odd-parity numbers is even (0 or 2)
        // Combinations: (Even, Even, Even), (Even, Odd, Odd), (Odd, Even, Odd), (Odd, Odd, Even)
        return (e1 * e2 * e3) + (e1 * o2 * o3) + (o1 * e2 * o3) + (o1 * o2 * e3);
    }
};

// int main() {
//     int n, m, p;
//     if (!(cin >> n)) return 0;
    
//     vector<int> firstValues(n);
//     for (int i = 0; i < n; i++) cin >> firstValues[i];

//     cin >> m;
//     vector<int> secondValues(m);
//     for (int i = 0; i < m; i++) cin >> secondValues[i];

//     cin >> p;
//     vector<int> thirdValues(p);
//     for (int i = 0; i < p; i++) cin >> thirdValues[i];

//     Solution sol;
//     cout << sol.countEvenParityTriplets(firstValues, secondValues, thirdValues) << endl;

//     return 0;
// }
