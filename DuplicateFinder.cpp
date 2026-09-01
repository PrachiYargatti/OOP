#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Initialize tortoise and hare pointers
        int tortoise = nums[0];
        int hare = nums[0];
        
        // Phase 1: Find the intersection point in the cycle
        do {
            tortoise = nums[tortoise];       // Moves 1 step
            hare = nums[nums[hare]];         // Moves 2 steps
        } while (tortoise != hare);
        
        // Phase 2: Find the entrance to the cycle (the duplicate)
        tortoise = nums[0];
        while (tortoise != hare) {
            tortoise = nums[tortoise];       // Moves 1 step
            hare = nums[hare];               // Moves 1 step
        }
        
        return hare;
    }
};
