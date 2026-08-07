class Solution {
private:
    int minLen(long long c2, long long c3, long long c5, long long c7) {
        c2 = max(0LL, c2);
        c3 = max(0LL, c3);
        c5 = max(0LL, c5);
        c7 = max(0LL, c7);

        int len = c5 + c7;
        int n9 = c3 / 2;
        int n8 = c2 / 3;
        int r3 = c3 % 2;
        int r2 = c2 % 3;

        len += n9 + n8;
        if (r2 == 0 && r3 == 0) {
            // no extra digits
        } else if (r2 == 2 && r3 == 1) {
            len += 2; // e.g., 2 and 6
        } else {
            len += 1; // 2, 3, 4, or 6
        }
        return len;
    }

    // Helper to divide target t by prime factors
    void factorize(long long t, long long &c2, long long &c3, long long &c5, long long &c7) {
        c2 = c3 = c5 = c7 = 0;
        while (t % 2 == 0) { c2++; t /= 2; }
        while (t % 3 == 0) { c3++; t /= 3; }
        while (t % 5 == 0) { c5++; t /= 5; }
        while (t % 7 == 0) { c7++; t /= 7; }
    }

    // Fills remaining positions greedily with smallest valid digits
    string fillSuffix(int remLen, long long c2, long long c3, long long c5, long long c7) {
        string res = "";
        for (int i = 0; i < remLen; ++i) {
            for (int d = 1; d <= 9; ++d) {
                int dc2 = (d == 2 || d == 6) ? 1 : (d == 4 ? 2 : (d == 8 ? 3 : 0));
                int dc3 = (d == 3 || d == 6) ? 1 : (d == 9 ? 2 : 0);
                int dc5 = (d == 5 ? 1 : 0);
                int dc7 = (d == 7 ? 1 : 0);

                if (minLen(c2 - dc2, c3 - dc3, c5 - dc5, c7 - dc7) <= remLen - 1 - i) {
                    res += to_string(d);
                    c2 -= dc2;
                    c3 -= dc3;
                    c5 -= dc5;
                    c7 -= dc7;
                    break;
                }
            }
        }
        return res;
    }

public:
    string smallestNumber(string num, long long t) {
        long long c2, c3, c5, c7;
        long long temp_t = t;
        factorize(temp_t, c2, c3, c5, c7);

        // Check if t has prime factors other than 2, 3, 5, 7
        long long check = 1;
        for (int i = 0; i < c2; ++i) check *= 2;
        for (int i = 0; i < c3; ++i) check *= 3;
        for (int i = 0; i < c5; ++i) check *= 5;
        for (int i = 0; i < c7; ++i) check *= 7;
        if (check != t) return "-1";

        int n = num.length();

        // Array to store factor counts of prefix num[0...i-1]
        vector<long long> pref2(n + 1, 0), pref3(n + 1, 0), pref5(n + 1, 0), pref7(n + 1, 0);
        int first_zero = -1;

        for (int i = 0; i < n; ++i) {
            if (num[i] == '0') {
                first_zero = i;
                break;
            }
            int d = num[i] - '0';
            pref2[i + 1] = pref2[i] + ((d == 2 || d == 6) ? 1 : (d == 4 ? 2 : (d == 8 ? 3 : 0)));
            pref3[i + 1] = pref3[i] + ((d == 3 || d == 6) ? 1 : (d == 9 ? 2 : 0));
            pref5[i + 1] = pref5[i] + (d == 5 ? 1 : 0);
            pref7[i + 1] = pref7[i] + (d == 7 ? 1 : 0);
        }

        // 1. Try matching a prefix of length i (from n down to 0)
        int max_prefix_len = (first_zero != -1) ? first_zero : n;

        for (int i = max_prefix_len; i >= 0; --i) {
            long long rem2 = c2 - pref2[i];
            long long rem3 = c3 - pref3[i];
            long long rem5 = c5 - pref5[i];
            long long rem7 = c7 - pref7[i];

            // Case i == n: check if num itself is valid
            if (i == n) {
                if (minLen(rem2, rem3, rem5, rem7) <= 0) {
                    return num;
                }
                continue;
            }

            // Try changing digit at index i to something strictly greater than num[i]
            int start_d = (num[i] - '0') + 1;
            for (int d = start_d; d <= 9; ++d) {
                int dc2 = (d == 2 || d == 6) ? 1 : (d == 4 ? 2 : (d == 8 ? 3 : 0));
                int dc3 = (d == 3 || d == 6) ? 1 : (d == 9 ? 2 : 0);
                int dc5 = (d == 5 ? 1 : 0);
                int dc7 = (d == 7 ? 1 : 0);

                long long n2 = rem2 - dc2;
                long long n3 = rem3 - dc3;
                long long n5 = rem5 - dc5;
                long long n7 = rem7 - dc7;

                int rem_len = n - 1 - i;
                if (minLen(n2, n3, n5, n7) <= rem_len) {
                    string prefix = num.substr(0, i) + (char)('0' + d);
                    return prefix + fillSuffix(rem_len, n2, n3, n5, n7);
                }
            }
        }

        // 2. If no solution of length <= n works, construct a solution of length > n
        int req_len = minLen(c2, c3, c5, c7);
        int target_len = max(n + 1, req_len);

        return fillSuffix(target_len, c2, c3, c5, c7);
    }
};
