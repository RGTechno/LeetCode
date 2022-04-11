class Solution {
    void shift(vector<vector<int>> &grid){
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>> v(m,vector<int>(n));
        
        v[0][0] = grid[m-1][n-1];
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 and j==0){
                    continue;
                }
                if(j==0){
                    v[i][j] = grid[i-1][n-1];
                }
                else v[i][j] = grid[i][j-1];
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                grid[i][j] = v[i][j];
            }
        }
        
    }
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        while(k--){
            shift(grid);
        }
        
        return grid;
        
    }
};