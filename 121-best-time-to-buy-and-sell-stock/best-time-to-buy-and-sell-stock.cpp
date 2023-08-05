class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size() ;
        int maxum = INT_MIN ;
        int minum  = INT_MAX ;
        for(int i = 0 ; i<n ; i++) {
            minum = min(prices[i] , minum) ;
            maxum = max(maxum , prices[i] - minum) ;
        }        
    return maxum ;
        
    }
};