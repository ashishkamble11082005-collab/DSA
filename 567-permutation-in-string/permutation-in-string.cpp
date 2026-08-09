#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();

        if (n1 > n2) return false;

        vector<int> s1Count(26, 0);
        vector<int> s2Count(26, 0);
        for (int i = 0; i < n1; i++) {
            s1Count[s1[i] - 'a']++;
            s2Count[s2[i] - 'a']++;
        }
        for (int i = 0; i < n2 - n1; i++) {
            if (s1Count == s2Count) return true;
            s2Count[s2[i] - 'a']--;
            s2Count[s2[i + n1] - 'a']++;
        }

        
        return s1Count == s2Count;
    }
};