#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int removeSpecificElement(vector<int>& arr, int target) {
        int count=0;
        int j=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]!=target){
                arr[j]=arr[i];
                j++;
            }
            else{
                count++;
            }
        }
        return n-count;
    }
};
