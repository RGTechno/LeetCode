class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int count = 0;
        
        int m = grid.size();
        
        for(int i=0;i<m;i++){
            int l=0,r=grid[i].size()-1;
            
            while(l<=r){
                int m = (l+r)/2;
                
                if(grid[i][m]<0){
                    r=m-1;
                }
                else{
                    l=m+1;
                }
            }
            
            // cout<<count<<"-"<<l<<endl;
            
            count+=grid[i].size()-l;
        }
        
        return count;
        
    }
};