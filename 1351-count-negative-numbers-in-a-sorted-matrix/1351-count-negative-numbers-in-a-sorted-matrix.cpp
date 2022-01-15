class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int count = 0;
        
        int m = grid.size();
        
        for(int i=0;i<m;i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]<0){
                    count++;
                }
            }
        }
        
        return count;
        
    }
};