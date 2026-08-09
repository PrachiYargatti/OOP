class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        // Initialize minCount with character frequencies of the first word
        vector<int> minCount(26,0);
        for(char c: words[0]){
            minCount[c-'a']++;
        }

        // Compare frequency count with all remaining words
        for(int i=1;i<words.size();i++){
            vector<int> currCount(26,0);
            for(char c: words[i]){
                currCount[c-'a']++;
            }

            // Keep the minimum frequency for each character across all words
            for (int j = 0; j < 26; j++) {
                minCount[j] = min(minCount[j], currCount[j]);
            }
        }

        // Construct the final result list
        vector<string> result;
        for(int i = 0; i < 26; i++) {
            while (minCount[i] > 0) {
                result.push_back(string(1, 'a' + i));
                minCount[i]--;
            }
        }

        return result;

    }
};
