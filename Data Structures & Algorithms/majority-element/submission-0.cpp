class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        for(auto id:mp){
            if(id.second>n)return id.first;
        }
        return -1;
        
    }
};