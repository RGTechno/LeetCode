class NumMatrix {
    vector<vector<int>> v;
    int m,n;
    vector<vector<int>> pre;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        v=matrix;
        m=matrix.size();
        n=matrix[0].size();
        
        vector<vector<int>> pref(m,vector<int>(n));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(j==0){
                    pref[i][j]=matrix[i][j];
                }
                else{
                    pref[i][j]=pref[i][j-1]+matrix[i][j];
                }
            }
        }
        
        pre=pref;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        
        for(int i=row1;i<=row2;i++){
            if(col1==0){
                sum+=(pre[i][col2]);
            }
            else sum+=(pre[i][col2]-pre[i][col1-1]);
        }
        
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */