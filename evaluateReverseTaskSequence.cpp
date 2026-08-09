#include <bits/stdc++.h>
using namespace std;

class solution {
  public:
  int evaluateReverseTaskSequence(vector<string>& expression) { 
    stack<long long> stk;
    
    for(const string& c :expression){
        if(c == "/" || c == "*" || c == "-" || c == "+"){
            long long b = stk.top();
            stk.pop();
            long long a = stk.top();
            stk.pop();
            
            if(c=="+") stk.push(a+b);
            else if(c=="-") stk.push(a-b);
            else if(c=="/") stk.push(a/b);
            else if(c=="*") stk.push(a*b);
        }
        else{
            stk.push(stoi(c));
        }
    }
    return stk.top();
  }
};
