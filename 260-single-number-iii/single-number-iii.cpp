 class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            ans ^= nums[i];
        }
        long long diff = ans & (-ans);
        int a = 0;
        int b = 0;
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] & diff) {
                a ^= nums[i];  
            } else {
                b ^= nums[i]; 
            }
        }
        
        return {a, b};  
    }
};