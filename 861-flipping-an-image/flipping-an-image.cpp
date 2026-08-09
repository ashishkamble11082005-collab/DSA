class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        
        for (int i = 0; i < n; i++) {
            int left = 0;
            int right = n - 1;
            
            while (left <= right) {
                
                
                if (image[i][left] == image[i][right]) {
                    int val = image[i][left] ^ 1;  
                    image[i][left] = val;
                    image[i][right] = val;
                }
                left++;
                right--;
            }
        }
        
        return image;
    }
};