class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int,int>ans;
    for(int i =0; i<nums.size(); i++){
        if(ans.find(nums[i])!=ans.end()){
            if(i-ans[nums[i]]<=k){
                return true;
            }
        }
        ans[nums[i]] = i;
    }  
    return false; 
    }
};