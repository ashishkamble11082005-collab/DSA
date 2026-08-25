class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int count[26] = {0};
            for (int j = i; j < n; j++) {
                count[s[j] - 'a']++;
                if (count[s[j] - 'a'] > 2) {
                    break;
                }
                ans = max(ans, j - i + 1);
            }
        }
        return ans;
    }
};