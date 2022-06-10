class Solution {
    void transpose(vector<vector<int>> &matrix,int &n){
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
            // print(matrix,n);
            // cout<<"///\n";
        }
    }
    
    void print(vector<vector<int>> &v,int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cout<<v[i][j]<<" ";
            cout<<endl;
        }
    }
    
    void shift(vector<vector<int>> &matrix,int &n){
        for(int j=0;j<n/2;j++){
            for(int i=0;i<n;i++){
                swap(matrix[i][j],matrix[i][n-j-1]);
            }
        }
    }
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        transpose(matrix,n);
        // cout<<"---------\n";
        // print(matrix,n);
        shift(matrix,n);
        
    }
};