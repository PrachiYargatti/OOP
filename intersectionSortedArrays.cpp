#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int> intersectionSortedArrays(vector<int> a, vector<int> b){
        int i=0,j=0;
        vector<int> res;
        
        while (i<a.size() && j<b.size()){
            if(a[i]==b[j]){
                res.push_back(a[i]);
                i++;
                j++;
            }
            else if(a[i]<b[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return res;
    }
};
