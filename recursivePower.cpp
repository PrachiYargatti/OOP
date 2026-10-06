#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    double recursivePower(double a, int b) {
        if(b == 0) return 1.0;
        
        if(b<0) return 1.0/recursivePower(a,-b);
        return a*recursivePower(a,b-1);
    }
};
