class Solution {
public:
    int climbStairs(int n) {
        
        int dp[n+1];
        
        // if(n==0) return 1;
        // if(n<0) return 0;
        dp[0]=0;
        dp[1]=1;
        
        if(n>=2){
            dp[2]=2;
        
            // p1 = climbStairs(n-1);
            // p2 = climbStairs(n-2);        
            for(int i=3;i<n+1;i++){
                dp[i]=dp[i-1]+dp[i-2];
            }
        }
        
        
        return dp[n];
    }
};