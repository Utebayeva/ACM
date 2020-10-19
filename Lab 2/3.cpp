class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int sum=0, size=piles.size()/3;
        
        for(int i=size; i<piles.size(); i+=2){
            sum+=piles[i];
        }
        
        return sum;
    }
};
