#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<int> minBitFlips(int n, vector<int> &arr1, vector<int> &arr2) {
        //Write your code here...
        vector<int> result(n);
        for(int i=0;i<n;i++){
            int diff=arr1[i]^arr2[i];
            int count=0;
            while(diff!=0){
                count++;
                diff=diff&(diff-1);
            }
            result[i] = count;
        }
        return result;
        
    }

};
