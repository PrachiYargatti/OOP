#include<bits/stdc++.h>
using namespace std;


class solution {
    public:
        vector<int> arrayRearrangement(vector<int>& arr) {
            vector<int> positive;
            vector<int> negative;
            
            for(int val : arr){
                if(val>=0){
                    positive.push_back(val);
                }
                else{
                    negative.push_back(val);
                }
            }
            
            vector<int> res;
            int i=0,j=0;
            while(i<positive.size() || j<negative.size()){
                if(i<positive.size()){
                    res.push_back(positive[i++]);
                }
                if(j<negative.size()){
                    res.push_back(negative[j++]);
                }
            }
            
            return res;
        }

};
