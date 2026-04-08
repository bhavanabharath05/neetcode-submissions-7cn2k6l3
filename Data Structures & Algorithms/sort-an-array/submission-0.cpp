class Solution {
public:
  vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
    void mergeSort(vector<int>& nums,int low,int high) {
      if(low>=high)return;
      int mid=(low+high)/2;
      mergeSort(nums,low,mid);
      mergeSort(nums,mid+1,high);
      merge(nums,low,mid,high);

      
        
    }
    void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
     
      int l=low;
      int h=mid+1;
      while(l<=mid && h<=high){
        if(arr[l]>arr[h]) temp.push_back(arr[h++]);
      
         else temp.push_back(arr[l++]);
      }
    while(l <= mid) temp.push_back(arr[l++]);
    while(h <= high) temp.push_back(arr[h++]);
    for(int i=low;i<=high;i++){
      arr[i]=temp[i-low];
    }
    }
    
};