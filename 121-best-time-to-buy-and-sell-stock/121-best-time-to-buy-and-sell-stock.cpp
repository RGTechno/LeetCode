class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        
        vector<int> pref(n);
        
        pref[n-1]=0;
        int maxVal = prices[n-1];
        
        for(int i=n-2;i>=0;i--){
            maxVal = max(maxVal,prices[i]);
            pref[i]=maxVal;
        }
        
        int ans  = 0;
        
        for(int i=0;i<n;i++){
            int profit = pref[i]-prices[i];
            ans = max(ans,profit);
        }
        
        return ans;
        
    }
};