class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string ans="";
        if(nums.size()==0){
            return ans;
        }
        
        
        string s1, s2;
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                s1=to_string(nums[i]);
                s2=to_string(nums[j]);
                string sum1=s1+s2; 
                string sum2=s2+s1;
                if(sum1<sum2){
                    swap(nums[i], nums[j]);
                }
            }
        }
        
        for(int i = 0; i < nums.size(); i++){ 
            if(ans[0] == '0') return "0";
            ans += to_string(nums[i]);
        }
        
        return ans;
    }
};