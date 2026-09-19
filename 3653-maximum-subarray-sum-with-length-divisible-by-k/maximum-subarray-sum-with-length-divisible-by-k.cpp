class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int n  = nums.size();
        vector<long long>min_prefix(k,LLONG_MAX);
        min_prefix[0]=0;
        long long current_prefix = 0;
        long long max_sum = LLONG_MIN;
        for(int i =1; i<=n; i++){
            current_prefix +=nums[i-1];
            int remainder = i%k;
            if(min_prefix[remainder]!=LLONG_MAX){
                max_sum = max(max_sum, current_prefix-min_prefix[remainder]);
            }
            min_prefix[remainder]=min(min_prefix[remainder],current_prefix);
        }
        return max_sum;
    }
};