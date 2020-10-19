class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int k=nums[0];
        int sum=nums[0];
        for(int i=1; i<nums.size(); i++){
            k=max(k+nums[i], nums[i]);
            sum=max(sum, k);
        }
        return sum;
    }
};
