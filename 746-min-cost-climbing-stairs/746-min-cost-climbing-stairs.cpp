class Solution {
    
    int solve(vector<int> &v,int n){
        
        int dp[n];
        
        for(int i=n-1;i>=0;i--){
            if(i+1==n or i+2==n){
                dp[i]=v[i];
            }
            else{
                dp[i] = v[i]+min(dp[i+1],dp[i+2]);
            }
        }
        
        return min(dp[0],dp[1]);
                        
    }
public:

    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        
        return solve(cost,n);
        
    }
};