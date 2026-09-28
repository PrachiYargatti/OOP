#include <algorithm>
#include <iostream>
class Solution {
public:
    int maxDepth(string s) {
        int current_depth = 0;
        int max_depth = 0;

        for(char c : s){
            if(c == '('){
                current_depth++;
                if(current_depth > max_depth){
                    max_depth = current_depth;
                }
            }
            else if(c == ')'){
                current_depth--;
            }
        }

        return max_depth;

        // stack<char> parentheses;
        // int max_nested_parentheses = 0;
        // for(char c : s){
        //     if(c == '('){
        //         parentheses.push(c);
        //     }
        //     else if(c == ')'){
        //         max_nested_parentheses = max(max_nested_parentheses, static_cast<int>(parentheses.size()));
        //         parentheses.pop();
        //     }
        //     else if(isdigit(c)){
        //         max_nested_parentheses = max(max_nested_parentheses, static_cast<int>(parentheses.size()));
        //     }
        // }

        // return max_nested_parentheses;
    }
};
