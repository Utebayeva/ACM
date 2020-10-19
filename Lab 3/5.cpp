class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> duplicate;
        
        for(int i=0; i<nums.size(); i++){
            if(duplicate.count(nums[i]) && i-duplicate[nums[i]]<=k){
                return true;
            }
            duplicate[nums[i]]=i;
        }
        
        return false;
    }
};
