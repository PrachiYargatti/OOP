#include <bits/stdc++.h>
using namespace std;

class solution {
private:
    bool isPalindrome(string& s, int left, int right){
        if(left >= right) return true;
        
        if(s[left] != s[right]) return false;
        
        return isPalindrome(s, left+1, right-1);
    }
    
    bool checkWithSwap(string& s, int left, int right){
        if(left >= right) return true;
        
        if(s[left] == s[right]) {
            return checkWithSwap(s, left+1, right-1);
        }
        
        int n = s.length();
        
        // Try swapping s[left] with every possible character at index k
        for(int k=0; k<n; k++){
            if(k == left) continue;
            
            swap(s[left], s[k]);
            
            if(isPalindrome(s, 0, n-1)) return true;
            
            swap(s[left], s[k]); // backtrack
        }
        
        // Try swapping s[right] with every possible character at index k
        for(int k=0; k<n; k++){
            if(k == right) continue;
            
            swap(s[right], s[k]);
            
            if(isPalindrome(s, 0, n-1)) return true;
            
            swap(s[right], s[k]); // backtrack
        }
        
        return false;
    }
public:
    bool canBecomePalindrome(string s) {
        // Code Here
        
        return checkWithSwap(s, 0, s.length()-1);
    }
};
