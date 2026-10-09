#include <bits/stdc++.h>
using namespace std;

class solution{
private:
    bool check(int i, string s){
        int n = s.size();
        if(i >= n/2) return true;
        if(s[i] != s[n-i-1]) return false;
        return check(i+1, s);
    }
public:
    bool checkPalindrome(string s){
        //Write your code here...
        return check(0, s);
    }
};
