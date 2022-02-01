class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        int mn = INT_MAX,mx_profit=0;
        
        for(int i=0;i<n;i++){
            mn = min(mn,prices[i]);
            mx_profit = max(mx_profit,prices[i]-mn);
        }
        
        return mx_profit;
    }
};