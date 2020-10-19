class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> nums(nums1.begin(), nums1.end());
        vector<int> ans;
        for (auto x : nums2)
            if (nums.count(x)) {
                ans.push_back(x);
                nums.erase(x);
            }
        return ans;
    }
};
