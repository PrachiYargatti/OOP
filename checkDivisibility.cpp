class Solution {
public:
    bool checkDivisibility(int n) {
        int org = n;
        int digitSum = 0;
        int digitProd = 1;
        while(n>0){
            int digit = n%10;
            n = n/10;
            digitSum += digit;
            digitProd *= digit;
        }

        return org%(digitSum+digitProd) == 0;
    }
};
