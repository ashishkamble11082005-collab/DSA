class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int ans =nums[0];
        int current_sum = nums[0];
        for(int i =1; i<n; i++){
            if(nums[i]>nums[i-1]){
                ans+=nums[i];
            }
            else{
                ans=nums[i];
            }
            current_sum=max(current_sum,ans);
        }
        return current_sum;
    }
};