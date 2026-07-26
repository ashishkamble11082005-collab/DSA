 class Solution {
public:
    int minMoves(std::vector<int>& nums) {
        int min_val = *std::min_element(nums.begin(), nums.end());
        long long total_moves = 0;
        for (int i = 0; i < nums.size(); i++) {
            total_moves += (nums[i] - min_val);
        }
        
        return total_moves;
    }
};