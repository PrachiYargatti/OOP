#include<bits/stdc++.h>
using namespace std;


class solution {
public:
    int removeRightmostSetBit(int N) {
        return N&(N-1);
    }
};
