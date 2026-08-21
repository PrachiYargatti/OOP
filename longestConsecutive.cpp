#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int longestConsecutive(vector<int>& arr) {
        if(arr.empty()) return 0;
        
        unordered_set<int> numSet(arr.begin(), arr.end());
        int maxLen = 0;
        
        for(int num: numSet) {
            if(numSet.find(num-1) == numSet.end()){
                int currNum = num;
                int currLen = 1;
                
                while(numSet.find(currNum+1) != numSet.end()){
                    currNum++;
                    currLen++;
                }
                maxLen = max(maxLen, currLen);
            }
        }
        
        return maxLen;
        
        // if(arr.size() <= 1) return arr.size();
        
        // sort(arr.begin(), arr.end());
        
        // int j=1;
        // int max_len = 0;
        // int len=0;
        // while(j<arr.size()){
        //     if(arr[j] == arr[j-1]) continue;
        //     if(arr[j-1] == arr[j]-1){
        //         len++;
        //         j++;
                
        //         max_len = max(len, max_len);
        //     }
        //     else{
        //         len = 0;
        //         j++;
        //     }
        // }
        
        // return max_len+1;
    }
};
