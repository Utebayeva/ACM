class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n;
        if(nums[0]==0 && nums.size()==1){
            n=1;
        }
        else if(nums[0]==1 && nums.size()==1){
            n=0;
        }
        else if(nums.size()>1)
            for(int i=1; i<nums.size(); i++){
	    	if(n==0 && i==nums.size()-1){
                    n=nums.size();
	        }
                if(nums[0]==1){
                    n=0;
                    break;
                }
                if(nums[i]-nums[i-1]==2){
                    n=nums[i]-1;
                    break;
                }
            }
        return n;
    }
};
