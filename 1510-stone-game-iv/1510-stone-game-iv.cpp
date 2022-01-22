class Solution {
public:
    
    int dp[100001];
    
    Solution(){
        memset(dp,-1,sizeof(dp));
    }
    
    int solve(int n){
        
        if(n==0) return 0;
        if(dp[n]!=-1) return dp[n];
        
        
        for(int i=1;i*i<=n;i++){            
            int sub=solve(n-(i*i));
            if(sub==0){
                return dp[n]=1;
            }
        }
        return dp[n]=0;
    }
    
    bool winnerSquareGame(int n) {
        
        return solve(n);
        
    }
};