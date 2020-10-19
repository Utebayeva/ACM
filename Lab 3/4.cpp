class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> d;
        
        for(auto x: strs){
            string key = x;
            sort(key.begin(), key.end());
            d[key].push_back(x);
        }
        
        for(auto x: d){
            string key = x.first;
            vector<string> v = x.second;
            ans.push_back(v);
        }
        
        return ans;
    }
};
