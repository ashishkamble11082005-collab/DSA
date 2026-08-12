class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int n = word.size();
        int max_len = 0;
        int current_len = 1;
        int unique_vowels = 1;

        for (int i = 1; i < n; ++i) {
            if (word[i] >= word[i - 1]) {
                current_len++;
                if (word[i] > word[i - 1]) {
                    unique_vowels++;
                }
            } else {
               
                current_len = 1;
                unique_vowels = 1;
            }

            if (unique_vowels == 5) {
                max_len = max(max_len, current_len);
            }
        }

        return max_len;
    }
};