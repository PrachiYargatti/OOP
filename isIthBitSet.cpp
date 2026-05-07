#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    // Function to check if the ith bit is set
    bool isIthBitSet(int N, int i) {
        return N&(1<<i);
    }
    
    // Function to set the ith bit
    int setIthBit(int N, int i) {
        return N|(1<<i);
    }
    
    // Function to clear the ith bit
    int clearIthBit(int N, int i) {
        return N&~(1<<i);
    }
    
    // Function to toggle the ith bit
    int toggleIthBit(int N, int i) {
        return N^(1<<i);
    }
};
