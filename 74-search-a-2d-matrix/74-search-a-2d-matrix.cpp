class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        // brute force (n*n)
//         for(auto &i:matrix){
//             for(auto &j:i){
//                 if(j==target) return true;
//             }
//         }
        
//         return false;
        
        //  optimised ()
        int m=matrix.size();
        int n=matrix[0].size();
        
        int j=n-1,i=0;
        while(j>=0 and i<m){
            if(matrix[i][j]==target) return true;
            if(matrix[i][j]>target) j--;
            else i++;
        }
        
        return false;
        
    }
};