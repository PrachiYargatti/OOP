class Solution {
public:
    string reverseParentheses(string s) {
        vector<char> st;

        for(char ch : s){
            if(ch == ')'){
                string temp = "";
                while(!st.empty() && st.back() != '('){
                    temp += st.back();
                    st.pop_back();
                }
                st.pop_back();

                for(char c: temp){
                    st.push_back(c);
                }
            }
            else{
                st.push_back(ch);
            }
        }
        return string(st.begin(), st.end());
    }
};
