class Solution {
    
    void transform(vector<vector<int>> &v,int m,int n,int r,int c){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==r or j==c) v[i][j]=0;
            }
        }
    }
    
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector<pair<int,int>> v;
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    v.push_back({i,j});
                }
            }
        }
        
        for(auto &p:v){
            int i = p.first;
            int j = p.second;
            
            transform(matrix,m,n,i,j);
        }
    }
};