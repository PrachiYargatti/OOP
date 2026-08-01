#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    string retainRareChars(string text, int limit) {
        unordered_map<char, int> freq;
        for(char ch:text){
            freq[ch]++;
        }
        
        string result = "";
        for(char ch:text){
            if(freq[ch]<limit){
                result += ch;
            }
        }
        
        return result;
    }
};
