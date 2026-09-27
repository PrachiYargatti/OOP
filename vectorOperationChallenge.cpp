#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void insertElement(vector<int> &arr, int x) {
        arr.push_back(x);
        
    }
    
    void deleteElement(vector<int> &arr, int x) {
        auto it = find(arr.begin(), arr.end(), x);
        if(it != arr.end()){
            arr.erase(it);
        }
        
    }
    
    void reverseArray(vector<int> &arr) {
        reverse(arr.begin(), arr.end());
        
    }
    
    void sizeOfArray(vector<int> &arr) {
        cout << arr.size();
    }
    
    void displayArray(vector<int> &arr) {
        for(int i=0;i<arr.size();i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};
