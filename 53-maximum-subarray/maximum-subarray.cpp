class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int maxnums =INT_MIN;
      int currentnums =0;
      int n = nums.size();
      for(int i=0; i<n; i++){
         currentnums +=nums[i];
      
      if(currentnums>maxnums){
        maxnums = currentnums;
      }
      if(currentnums<0){
        currentnums =0;

      }
      }
           return maxnums;
    }
 
};