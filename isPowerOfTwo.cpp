#include<bits/stdc++.h>
using namespace std;


class solution {
public:
    bool isPowerOfTwo(int N) {
        if( (N&(N-1)) == 0){
            return true;
        }
        return false;
    }
};
