class Solution {
public:
    long long countCommas(long long n) {
        long long totalCommas = 0;
        
        // Thresholds where an extra comma is added:
        // 10^3, 10^6, 10^9, 10^12, 10^15
        long long thresholds[] = {
            1000LL, 
            1000000LL, 
            1000000000LL, 
            1000000000000LL,
            1000000000000000LL
        };
        
        for (long long t : thresholds) {
            if (n >= t) {
                totalCommas += (n - t + 1);
            }
        }
        
        return totalCommas;
    }
};
