class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string x:tokens){
            if(x!="+"&& x!="-"&&x!="*"&&x!="/"){
                int b=stoi(x);
                st.push(b);

            }
            else{
                if(x=="+"){
                int y= st.top();
                st.pop();
                int z=st.top();
                st.pop();
                st.push(y+z);
            }
              if(x=="-"){
                int y= st.top();
                st.pop();
                int z=st.top();
                st.pop();
                st.push(z-y);
            }
              if(x=="*"){
                int y= st.top();
                st.pop();
                int z=st.top();
                st.pop();
              st.push(y*z);
            }
              if(x=="/"){
                int y= st.top();
                st.pop();
                int z=st.top();
                st.pop();
              st.push(z/y);
            }
            
        }
    }
      return st.top();
    }
};
