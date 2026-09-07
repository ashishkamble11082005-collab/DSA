class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0;
        int max_len = 0;
        vector<int> char_map(256, -1);
        for (int r = 0; r < n; r++) {
            if (char_map[s[r]] != -1) {
                if (char_map[s[r]] >= l) {
                    l = char_map[s[r]] + 1;
                }
            }
            char_map[s[r]] = r;
            int length = r - l + 1;
            max_len = max(max_len, length);
        }

        return max_len;
    }
};