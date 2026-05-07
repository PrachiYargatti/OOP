#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int countSetBits(int N) {
        int count=0;
        while(N!=0){
            count++;
            N=N&(N-1);
        }
        return count;
    }
};
