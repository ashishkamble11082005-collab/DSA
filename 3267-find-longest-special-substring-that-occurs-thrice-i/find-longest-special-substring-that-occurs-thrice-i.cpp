class Solution {
public:
    int maximumLength(string s) {
        int n = s.size();
        unordered_map<string, int> countMap;
        for (int i = 0; i < n; i++) {
            string curr = "";
            for (int j = i; j < n; j++) {
                if (curr.empty() || curr.back() == s[j]) {
                    curr.push_back(s[j]);
                    countMap[curr]++;
                } else {
                    break;
                }
            }
        }
 
        int result = -1;
        for (auto &it : countMap) {
            if (it.second >= 3) {
                result = max(result, (int)it.first.size());
            }
        }

        return result;
    }
};