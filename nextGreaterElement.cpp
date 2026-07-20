#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<int> nextGreaterElement(vector<int> arr) {
        stack<int> stk;
        int n = arr.size();
        vector<int> res(n);
        
        for(int i=n-1;i>=0;i--){
            while(!stk.empty() && arr[i]>=stk.top()){
                stk.pop();
            }
            if(!stk.empty()) res[i]=stk.top();
            else res[i] = -1;
            stk.push(arr[i]);
        }
        
        return res;
    }

};
