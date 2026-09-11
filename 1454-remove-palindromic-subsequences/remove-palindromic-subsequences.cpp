class Solution {
public:
    int removePalindromeSub(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                return 2; 
            }
            left++;
            right--;
        }

        return 1; // It is already a palindrome
    }
};