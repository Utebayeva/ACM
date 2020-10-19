class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> intersec(nums1.begin(), nums1.end());
        vector<int> res;
        
        for(auto a: nums2){
            if(intersec.count(a)){
                res.push_back(a);
                intersec.erase(a);
            }
        }
        
        return res;
    }
};
