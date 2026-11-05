class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int distanceValue = 0;
        
        for (int i = 0; i < arr1.size(); i++) {
            bool isValid = true;
            for (int j = 0; j < arr2.size(); j++) {
                if (abs(arr1[i] - arr2[j]) <= d) {
                    isValid = false; // Found an element within distance d, so arr1[i] is invalid
                    break;
                }
            }
            if (isValid) {
                distanceValue++; // No element in arr2 was within distance d, so count it
            }
        }
        
        return distanceValue;
    }
};
