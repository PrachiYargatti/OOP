#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
    string prefixToPostfix(string s) {
        //Write Your Code Here
        
        stack<string> st;
        
        for(int i=s.length()-1;i>=0;i--){
            char ch = s[i];
            
            if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^' || ch=='%'){
                string op1 = st.top(); st.pop();
                string op2 = st.top(); st.pop();
                
                string temp = op1+op2+ch;
                
                st.push(temp);
            }
            else{
                st.push(string(1,ch));
            }
        }
        
        return st.top();
    }
};
