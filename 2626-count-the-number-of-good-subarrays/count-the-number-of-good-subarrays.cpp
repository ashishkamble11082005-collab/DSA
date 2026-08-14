class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long left = 0;
        long long n = nums.size();
        long long subarray = 0;
        unordered_map<int, int> freq;
        long long ans = 0;
        for (int right = 0; right < n; right++) {
            subarray += freq[nums[right]];
            freq[nums[right]]++;
            while (subarray >= k) {
                ans += (n - right);  
                freq[nums[left]]--;
                subarray -= freq[nums[left]];
                left++;
            }
        }

        return ans;
    }
};