class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> strnums;

        for(int num: nums){
            strnums.push_back(to_string(num));
        }

        //custom sort comparator
        sort(strnums.begin(), strnums.end(), [](const string &a, const string &b){
            return a+b > b+a;
        });

        if(strnums[0] == "0"){
            return "0";
        }

        string res = "";
        for(const string &s: strnums){
            res += s;
        }

        return res;
    }
};
