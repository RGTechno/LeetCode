class Solution {
public:
    
    int c=0;
    
    bool check(vector<vector<int>> &grid,vector<vector<bool>> &visited){
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==0 and !visited[i][j]){
                    return false;
                }
            }
        }
        
        return true;
    }
    
    void solve(vector<vector<int>> &grid,vector<vector<bool>> &visited,int sr,int sc,int er,int ec){
        
        if(sr<0 or sc<0 or sr>=grid.size() or sc>=grid[0].size() or grid[sr][sc]==-1 or visited[sr][sc]==true){
            return;
        }
        
        if(sr==er and sc==ec){
            if(check(grid,visited)){
                c++;
            }
            return;
        }
        
        
        visited[sr][sc]=true;
        solve(grid,visited,sr-1,sc,er,ec);
        solve(grid,visited,sr,sc-1,er,ec);
        solve(grid,visited,sr+1,sc,er,ec);
        solve(grid,visited,sr,sc+1,er,ec);
        visited[sr][sc]=false;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        
        int sr,sc,er,ec;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    sr=i;
                    sc=j;
                }
                if(grid[i][j]==2){
                    er=i;
                    ec=j;
                }
            }
        }
        
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        
        solve(grid,visited,sr,sc,er,ec);
        
        return c;
        
    }
};