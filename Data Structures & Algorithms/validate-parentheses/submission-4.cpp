class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s.length()==1)return false;
        for(char x:s){
            if(x=='(' ||x=='{'||x=='['){
               st.push(x);
            }
            else{
                if(st.empty()) return false;
                if(st.top()=='(' && x!=')')return false;
                if(st.top()=='{' && x!='}')return false;
                if(st.top()=='[' && x!=']')return false;
                st.pop();
            }
        }
        return st.empty();
        
    }
};
