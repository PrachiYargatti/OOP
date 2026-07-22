class Solution {
public:
    int secondHighest(string s) {
        int max = -1;
        int secMax = -1;

        for(char ch: s){
            if(isdigit(ch)){
                int val = ch - '0'; //convert char digit to integer
                if(val > max){
                    secMax = max;
                    max = val;
                }
                else if(secMax < val && max > val){
                    secMax = val;
                }
            }
        }
        return secMax;
    }
};
