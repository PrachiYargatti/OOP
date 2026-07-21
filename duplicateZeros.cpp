#include <vector>
using namespace std;

class solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n);
        int i = 0, j = 0;

        while (j < n && i < n) {
            if (arr[i] == 0) {
                res[j] = 0;
                if (j + 1 < n) {
                    res[j + 1] = 0;
                }
                j += 2;
            } else {
                res[j] = arr[i];
                j++;
            }
            i++;
        }

        // Copy back to modify in-place
        arr = res;
    }
};
