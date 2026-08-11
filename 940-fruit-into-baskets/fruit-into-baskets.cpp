class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left = 0;
        int right = 0;

        unordered_map<int, int> map;  
        int max_length = 0;

        while (right < fruits.size()) {  
            map[fruits[right]]++;  

            
            while (map.size() > 2) { 
                map[fruits[left]]--;  
                
                if (map[fruits[left]] == 0) {  
                    map.erase(fruits[left]);  
                }
                left++;  
            }
 
            max_length = max(max_length, right - left + 1);
            right++;  
        }

        return max_length;
    }
};