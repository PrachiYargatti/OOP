#include <bits/stdc++.h>
using namespace std;

// Function to check if a allocation is possible with given maxPages limit
bool isPossible(const vector<int>& arr, int k, long long maxPages) {
    int studentsRequired = 1;
    long long currentPagesSum = 0;

    for (int pages : arr) {
        // If a single book has more pages than maxPages, allocation is impossible
        if (pages > maxPages) {
            return false;
        }

        if (currentPagesSum + pages > maxPages) {
            // Allocate to the next student
            studentsRequired++;
            currentPagesSum = pages;
            
            // If students needed exceed available students k, allocation fails
            if (studentsRequired > k) {
                return false;
            }
        } else {
            currentPagesSum += pages;
        }
    }

    return true;
}

class solution {
public:
    int bookAllocation(vector<int>& arr, int k) {
        int n = arr.size();

        // If students are more than total books, each student cannot get at least one book
        if (k > n) {
            return -1;
        }
    
        // Binary search range for the answer
        // Low: maximum single book pages (a student must get at least this)
        // High: sum of all pages (if 1 student receives all books)
        long long low = *max_element(arr.begin(), arr.end());
        long long high = 0;
        for (int pages : arr) {
            high += pages;
        }
    
        long long result = -1;
    
        while (low <= high) {
            long long mid = low + (high - low) / 2;
    
            if (isPossible(arr, k, mid)) {
                result = mid; // Possible solution found, try to minimize further
                high = mid - 1;
            } else {
                low = mid + 1; // Not possible, need a larger page limit
            }
        }
    
        return result;
    }

};
