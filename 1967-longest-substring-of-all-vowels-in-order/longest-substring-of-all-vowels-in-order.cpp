
class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int max_length = 0;
        int vowels = 1;
        int left = 0;
        int n = word.size();

        for (int right = 0; right < n; right++) {
            if (right > 0 && word[right] < word[right - 1]) {
                vowels = 1;
                left = right;  
            }
           
            else if (right > 0 && word[right] > word[right - 1]) {
                vowels++;
            }

            
            if (word[left] == 'a' && vowels == 5) {
                int current_window_len = right - left + 1;
                max_length = max(max_length, current_window_len);
            }
        }

        return max_length;
    }
};