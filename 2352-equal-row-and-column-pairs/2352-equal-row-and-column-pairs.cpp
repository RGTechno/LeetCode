class Solution {
    
    bool good(vector<vector<int>> &v,int n,int r,int c){
        for(int i=0;i<n;i++){
            if(v[r][i]!=v[i][c]) return false;
        }
        return true;
    }
    
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        int count = 0;
        
        int n=grid.size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(good(grid,n,i,j)){
                    count++;
                }
            }
        }
        
        return count;
        
    }
};