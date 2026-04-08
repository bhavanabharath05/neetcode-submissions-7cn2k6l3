class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int a:asteroids){
            bool destroyed=false;
            while(!st.empty() &&((st.top()>0)&&(a<0)))
            {
                if(abs(st.top()) == abs(a)){
                    st.pop();
                    destroyed=true;
                    break;
                } else if(abs(st.top()) < abs(a)){
                    st.pop();
                } else {
                    destroyed=true;
                    break;
                }
            }

        
         if(destroyed==false){
            st.push(a);
         }
        }
         
            
        
        vector<int>v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
     
        }
        reverse(v.begin(), v.end());
        return v;
    }
   
};