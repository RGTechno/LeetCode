class Solution {
    int dp[101][101];
    
    int solve(vector<vector<int>> &v,int m,int n,int i=0,int j=0){
        
        if(i==m or j==n or v[i][j]==1) return 0;
        
        if(i==m-1 and j==n-1) return 1;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int r = solve(v,m,n,i,j+1);
        int d = solve(v,m,n,i+1,j);
        
        return dp[i][j] = (r+d);        
    }
public:
    Solution(){
        memset(dp,-1,sizeof(dp));
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
                
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        int count = solve(obstacleGrid,m,n);
        
        return count;
        
    }
};