class Solution {
    int countArea(vector<vector<int>>& grid,vector<vector<bool>>& v,int m,int n,int r,int c){
        
        if(r<0 || r>=m || c<0 || c>=n) return 0;
        
            if(v[r][c]) return 0;
            v[r][c] = true;
            if(grid[r][c]==0) return 0;
            int t = countArea(grid,v,m,n,r-1,c);
            int b = countArea(grid,v,m,n,r+1,c);
            int l = countArea(grid,v,m,n,r,c-1);
            int right = countArea(grid,v,m,n,r,c+1);
        
            return (t+b+l+right)+1;            
        
        
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<bool>> v(m,vector<bool>(n,false));
        
        int ans = 0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!v[i][j] and grid[i][j]==1){
                    int count = countArea(grid,v,m,n,i,j);
                    ans=max(ans,count);
                }
            }
        }
        
        return ans;
        
    }
};