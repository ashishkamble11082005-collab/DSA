
class Solution {
private:
    int calculateDaysNeeded(const std::vector<int>& weights, int cap) {
        int days = 1;
        int currentLoad = 0;
        for (int i=0; i<weights.size(); i++) {
            int w = weights[i];
            if (currentLoad + w > cap) {
                days++;          
                currentLoad = w;     
            } else {
                currentLoad += w;
            }
        }
        return days;
    }

public:
    int shipWithinDays(std::vector<int>& weights, int days) {
        int low = *std::max_element(weights.begin(), weights.end());
        int high = std::accumulate(weights.begin(), weights.end(), 0);
        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            int daysNeeded = calculateDaysNeeded(weights, mid);

            if (daysNeeded <= days) {
                ans = mid;        
                high = mid - 1;
            } else {
                low = mid + 1;     
            }
        }

        return ans;
    }
};