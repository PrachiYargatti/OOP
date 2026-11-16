class Solution {
public:
    string digitSum(string s, int k) {
        // Continue the process as long as the length of s is strictly greater than k
        while (s.length() > k) {
            string next_s = "";
            
            // Divide s into consecutive groups of size k
            for (size_t i = 0; i < s.length(); i += k) {
                string group = s.substr(i, k);
                
                // Calculate the sum of all digits in the current group
                int sum = 0;
                for (char c : group) {
                    sum += c - '0';
                }
                
                // Append the string representation of the sum to the next string
                next_s += to_string(sum);
            }
            
            // Update s for the next round
            s = next_s;
        }
        
        return s;
    }
};
