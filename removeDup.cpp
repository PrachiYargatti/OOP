#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int removeDup(vector<int>& arr) {
        //Write your code here...
        int i = 0;
        for (int j=2;j<=arr.size();j++){
            if(arr[i] != arr[j]){
                arr[i+2] = arr[j];
                i++;
            }
        }
        return i+1;
    }
};
