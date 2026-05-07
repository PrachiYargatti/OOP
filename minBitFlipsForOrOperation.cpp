#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int minBitFlips(int x, int y, int z) {
        int count=0;
        while(x!=0 || y!=0 || z!=0){
            if((z&1)==1){
                if((x&1)==0 && (y&1)==0){
                    count++;
                }
            }
            else{
                count += (x&1) + (y&1);
            }
            x = x>>1;
            y = y>>1;
            z = z>>1;
        }
        return count;
    }

};
