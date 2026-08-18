class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_sum = nums[0];
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            ans += nums[i];
            max_sum = max(max_sum, ans);
            if (ans < 0) {
                ans = 0;
            }
        }
        return max_sum;
    }
};