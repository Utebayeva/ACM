class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double a=0, mx=-1000000000, ans;
        for(int i=0; i<nums.size(); i++) {
            if(i<k){
                a+=nums[i];
            }
            else{
                mx=max(a, mx);
                a+=nums[i]-nums[i-k];
            }
        }
        ans=max(a, mx);
        ans=ans/k;
        return ans;
    }
};
