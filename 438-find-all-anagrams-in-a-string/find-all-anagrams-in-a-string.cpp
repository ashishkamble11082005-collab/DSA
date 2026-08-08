 class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int s_len = s.length();
        int p_len = p.length(); 
        if (s_len < p_len) return ans;

        vector<int> p_freq(26, 0);
        vector<int> window_freq(26, 0);

        for (int i = 0; i < p_len; i++) {
            p_freq[p[i] - 'a']++;
            window_freq[s[i] - 'a']++;
        }
        
        if (p_freq == window_freq) {
            ans.push_back(0);
        }

        for (int i = p_len; i < s_len; i++) {
            window_freq[s[i] - 'a']++;
            window_freq[s[i - p_len] - 'a']--;
            if (p_freq == window_freq) {
                ans.push_back(i - p_len + 1);
            }
        }
        
        return ans;
    }
};