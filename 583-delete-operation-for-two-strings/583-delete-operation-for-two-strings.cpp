class Solution {
    int dp[501][501];
    
    int solve(string &word1,int n1,string &word2,int n2){
        if(n1==0 or n2==0) return 0; 
        
        if(dp[n1][n2]!=-1) return dp[n1][n2];
        
        if(word1[n1-1]==word2[n2-1]){
            return dp[n1][n2] = 1+solve(word1,n1-1,word2,n2-1);
        }
        else{
            return dp[n1][n2] = max(solve(word1,n1,word2,n2-1),solve(word1,n1-1,word2,n2));
        }
    }
    
public:
    Solution(){
        memset(dp,-1,sizeof(dp));
    }
    int minDistance(string word1, string word2) {
        
        int n1 = word1.size();
        int n2 = word2.size();
        
        int x = solve(word1,n1,word2,n2);
        
        int total = n1+n2;
        
        return (total-(2*x));
        
    }
};