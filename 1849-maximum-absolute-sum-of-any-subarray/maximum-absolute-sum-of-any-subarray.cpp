class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_sum = 0;
        int min_sum = 0;
        int curr_max = 0;
        int curr_min = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            curr_max = max(nums[i], curr_max + nums[i]);
            max_sum = max(max_sum, curr_max);

            curr_min = min(nums[i], curr_min + nums[i]);
            min_sum = min(min_sum, curr_min);
        }

        return max(max_sum, abs(min_sum));
    }
};