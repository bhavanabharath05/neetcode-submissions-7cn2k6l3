class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       sort(strs.begin(),strs.end());
       string x=strs[0];
       string last=strs[strs.size()-1];
       string result="";
       for(int i=0;i<x.size();i++){
        if(x[i]!=last[i])break;
        result+=x[i];
       }
       return result;


    }
};