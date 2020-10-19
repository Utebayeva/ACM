class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> num;
        for(auto x: nums){
            if(num.count(x)>=1){
                return true;
            }
            num[x]++;
        }
    
        return false;
    }
};
