class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(2*n);
        int k=0;
        for(int i=0;i<nums.size();i++){
            v[k]=nums[i];
            k++;
        }
        int j=0;
       while(j<nums.size()){
        v[k]=nums[j];
        j++;
        k++;
       }
       return v;
    }
};