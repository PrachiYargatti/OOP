#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int missingNumber(vector<int> &arr) {
        int n = arr.size();
        int sum = 0;
        for (int i=1;i<=n;i++){
            sum += i;
        }
        int res_sum = 0;
        for (int i=0; i<n; i++){
            res_sum += arr[i];
        }
        return (sum - res_sum);

      // int n = arr.size();
      //   int ans = 0;
      //   for (int i=0;i<n;i++){
      //       ans ^= (i+1);
      //       ans ^= arr[i];
      //   }
      //   return ans;
    }

};
