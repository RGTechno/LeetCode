#define ll long long int

class Solution {
    ll dp[13][10001];
    
    ll solve(vector<int> &coins,int n,int amount){
        
        if(amount==0) return 0;
        if(n==0) return INT_MAX;
        
        if(dp[n][amount]!=-1) return dp[n][amount];
        
        if(coins[n-1]>amount){
            return dp[n][amount] = solve(coins,n-1,amount);
        }
        
        ll take = solve(coins,n,amount-coins[n-1])+1;
        ll not_take = solve(coins,n-1,amount);
            
        return dp[n][amount] = min(take,not_take);   
    }
public:
    Solution(){
        memset(dp,-1,sizeof(dp));
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        
        int ans = solve(coins,n,amount);  
        
        return ans==INT_MAX?-1:ans;
    }
};