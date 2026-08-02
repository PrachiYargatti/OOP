#include <bits/stdc++.h>
using namespace std;

// Fenwick Tree (Binary Indexed Tree) for range sum queries and point updates
class FenwickTree {
private:
    int size;
    vector<int> tree;

public:
    FenwickTree(int n) {
        size = n;
        tree.assign(n + 1, 0);
    }

    void update(int i, int delta) {
        for (; i <= size; i += i & (-i)) {
            tree[i] += delta;
        }
    }

    int query(int i) {
        int sum = 0;
        for (; i > 0; i -= i & (-i)) {
            sum += tree[i];
        }
        return sum;
    }
};

class solution {
    public:
    int countStrongMiddlePositions(vector<int>& values, int k) { 
        int n = values.size();
        if (n == 0) return 0;

        // Coordinate Compression to handle arbitrary/large values
        vector<int> sortedVals = values;
        sort(sortedVals.begin(), sortedVals.end());
        sortedVals.erase(unique(sortedVals.begin(), sortedVals.end()), sortedVals.end());

        auto getRank = [&](int val) {
            return lower_bound(sortedVals.begin(), sortedVals.end(), val) - sortedVals.begin() + 1;
        };

        int maxRank = sortedVals.size();

        // Right Fenwick Tree initialized with all elements
        FenwickTree rightBIT(maxRank);
        for (int val : values) {
            rightBIT.update(getRank(val), 1);
        }

        // Left Fenwick Tree initialized empty
        FenwickTree leftBIT(maxRank);

        int strongMiddleCount = 0;

        for (int i = 0; i < n; ++i) {
            int rank = getRank(values[i]);

            // Remove current element from right side
            rightBIT.update(rank, -1);

            // Query elements strictly smaller than values[i] (rank - 1)
            int leftSmaller = leftBIT.query(rank - 1);
            int rightSmaller = rightBIT.query(rank - 1);

            if (leftSmaller >= k && rightSmaller >= k) {
                strongMiddleCount++;
            }

            // Add current element to left side
            leftBIT.update(rank, 1);
        }

        return strongMiddleCount;
    
  }
};
