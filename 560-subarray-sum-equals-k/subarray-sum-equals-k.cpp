class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        int sum = 0;
        unordered_map<int, int> prefix_sum;
        
        prefix_sum[0] = 1;

        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (prefix_sum.find(sum - k) != prefix_sum.end()) {
                count += prefix_sum[sum - k];
            }
            prefix_sum[sum]++;
        }

        return count;
    }
};