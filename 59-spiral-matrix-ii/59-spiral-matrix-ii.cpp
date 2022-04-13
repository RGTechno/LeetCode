class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> v(n,vector<int>(n,0));
        
        int num=1;
        int sr=0,sc=0,er=n-1,ec=n-1;
        int target = (n*n);
        while(sr<=er and sc<=ec){
            //Start Row

            for(int i=sc;i<=ec;i++){
                v[sr][i]=num;
                num++;
            }

            //End Column

            for(int i=sr+1;i<=er;i++){
                v[i][ec]=num;
                num++;
            }

            // End Row

            for(int i=ec-1;i>=sc;i--){
                if(sr==er){
                    break;
                }
                v[er][i]=num;
                num++;
            }

            //Start Column

            for(int i=er-1;i>=sr+1;i--){
                if(sc==ec){
                    break;
                }
                v[i][sc]=num;
                num++;
            }

            sr++;
            ec--;
            er--;
            sc++;
        }
        
        return v;
        
    }
};