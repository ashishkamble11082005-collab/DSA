class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        unordered_map<int, int> map;
        map[0] = -1;
        
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            int count = sum % k;
            
            if (map.find(count) != map.end()) {
                if (i - map[count] >= 2) {
                    return true;
                }
            } else {
                
                map[count] = i;
            }
        }
        
        return false;
    }
};