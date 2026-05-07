#include<bits/stdc++.h>
using namespace std;


class solution {
public:
    void swap(int &a, int &b) {
        a = a^b;
        b = a^b;
        a = a^b;
    }
};
