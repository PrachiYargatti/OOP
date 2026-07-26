#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> getCommonElements(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> res;
        int i=0,j=0,k=0;
        
        while(i<nums1.size() && j<nums2.size() && k<nums3.size()){
            if(nums1[i]==nums2[j] && nums2[j]==nums3[k]){
                res.push_back(nums1[i]);
                i++;
                j++;
                k++;
            }
            else if(nums1[i] < nums2[j]){
                i++;
            }
            else if(nums2[j] < nums3[k]){
                j++;
            }
            else{
                k++;
            }
        }
        return res;
    }
};
