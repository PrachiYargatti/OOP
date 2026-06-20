#include <bits/stdc++.h>
using namespace std;

class solution {
  public:
    int minPlatforms(vector<int>& arr, vector<int>& dep) {
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        
        int i=0, j=0, count=0, ans=0;
        
        while(i<n){
            if(arr[i] <= dep[j]){
                count++;
                ans = max(count, ans);
                i++;
            }
            else{
                count--;
                j++;
            }
        }
        return ans;
    }    
};
