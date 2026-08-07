 class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> mp;  
        vector<string>ans;
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            string curr = "";              
            for (int j = i; j < n; j++) {
                curr += s[j];                   
              
                if (j - i + 1 == 10) {
                    if (mp[curr] == 1) {         
                        ans.push_back(curr);
                    }
                    mp[curr]++;                 
                    break;                     
                }
            }
        } 
        return ans; 
    }
};