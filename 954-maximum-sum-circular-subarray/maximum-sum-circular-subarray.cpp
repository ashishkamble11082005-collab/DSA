class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int total_sum = 0;
        
        int current_max = 0, max_sum = INT_MIN;
        int current_min = 0, min_sum = INT_MAX;

        for (int i = 0; i < n; i++) {
            total_sum += nums[i];
            current_max = max(nums[i], current_max + nums[i]);
            max_sum = max(max_sum, current_max);

            current_min = min(nums[i], current_min + nums[i]);
            min_sum = min(min_sum, current_min);
        }
        if (max_sum < 0) {
            return max_sum;
        }

        return max(max_sum, total_sum - min_sum);
    }
};