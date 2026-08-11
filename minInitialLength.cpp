#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    int minInitialLength(int n, string s) {
        // Write your code here...
        int left = 0;
        int right = n - 1;
    
        // Remove matching opposite outer characters
        while (left < right && s[left] != s[right]) {
            left++;
            right--;
        }
    
        // Remaining length of the original string
        return right - left + 1;
    }
};
