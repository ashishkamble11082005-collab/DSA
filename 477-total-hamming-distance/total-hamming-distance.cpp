class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
       int n = nums.size();
       int total_size =0;
       for(int bit =0; bit<32; bit++){
        int count_ones = 0;
        for(int i=0; i<n; i++){
         int num = nums[i];
         if((nums[i]>>bit) & 1 ){
            count_ones ++;
         }
       
        }
        int count_zeros = n- count_ones;
        total_size+= count_zeros*count_ones;
       } 
       return total_size;
    }
};