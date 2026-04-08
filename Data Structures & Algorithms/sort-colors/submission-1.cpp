class Solution {
public:
    void sortColors(vector<int>& nums) {
     int r=0,w=0,b=0;
     int k=0;
     for(int x:nums){
        if(x==0) r++;
        else if(x==1)w++;
        else b++;
     }
     for(int i=0;i<r;i++){
        nums[k]=0;
        k++;
     }
      for(int i=0;i<w;i++){
        nums[k]=1;
        k++;
     }
      for(int i=0;i<b;i++){
        nums[k]=2;
        k++;
     }
    }

};