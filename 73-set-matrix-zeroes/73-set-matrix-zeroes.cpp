class Solution {
public:
    
    void makeZero(vector<vector<bool>>& visited,vector<vector<int>>& arr,int r,int c,int m,int n){
        
        for(int i=0;i<n;i++){
            if(arr[r][i]!=0){
                visited[r][i]=true;
            }
            arr[r][i]=0;
            
        }
        
        for(int i=0;i<m;i++){  
            
            if(arr[i][c]!=0){
                visited[i][c]=true;
            }
            arr[i][c]=0;
            
        }
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0 and !visited[i][j]){
                    makeZero(visited,matrix,i,j,m,n);
                }
            }
        }
        
    }
};