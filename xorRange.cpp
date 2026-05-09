#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int f(int n){
        int rem = n%4;
        if(rem==0) return n;
        if(rem==1) return 1;
        if(rem==2) return n+1;
        return 0;
    }
    int xorRange(int left, int right) {
        return f(right) ^ f(left-1); 
    }

};
