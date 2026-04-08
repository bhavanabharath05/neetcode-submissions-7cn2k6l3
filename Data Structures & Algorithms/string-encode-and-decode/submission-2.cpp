class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(string s:strs){
           res += to_string(s.size()) + "#" + s;
        }
        return res;
    }

    vector<string> decode(string s) {
      vector<string>v;
      
      int i=0;
     while(i<s.size()){
      
       int l=0;
      while(s[i]!='#'){
        l=l*10+(s[i]-'0');
        i++;
      }
      i++;
      string res=s.substr(i,l);
      v.push_back(res);
      i+=l;
     }
    
      return v;
    }
};
