class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, ans = "";

        while (ss >> word) {
            if (ans == "") {
                ans = word;
            } else {
                ans = word + " " + ans; // place newer words in front
            }
        }

        return ans;
    }
};