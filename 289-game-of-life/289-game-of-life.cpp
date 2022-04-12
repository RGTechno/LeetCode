class Solution {
    
    int fun(vector<vector<int>> &v,int i,int j,int &m,int &n){
        
        int count = 0;
        if(i==0){
            for(int k=i;k<=(i+1) and k<m;k++){
                if(j==0){
                    for(int q=j;q<=(j+1) and q<n;q++){
                        if(k==i and q==j) continue;
                        if(v[k][q]==1) count++;
                    }
                }
                else{
                    for(int q=j-1;q>=0 and q<=(j+1) and q<n ;q++){
                        if(k==i and q==j) continue;
                        if(v[k][q]==1) count++;
                    }
                }
            }
            return count;
        }
        
        
        if(j==0){
            for(int k=i-1;k>=0 and k<=(i+1) and k<m;k++){
                for(int q=j;q<=(j+1) and q<n;q++){
                    if(k==i and q==j) continue;
                    if(v[k][q]==1) count++;
                }
            }
            return count;
        }
        
        for(int k=i-1;k>=0 and k<=(i+1) and k<m;k++){
            for(int q=j-1;q>=0 and q<=(j+1) and q<n ;q++){
                if(k==i and q==j) continue;
                if(v[k][q]==1) count++;
            }
        }
        
        return count;
        
    }
    
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        int m = board.size();
        int n = board[0].size();
        
        vector<vector<int>> v(m,vector<int>(n,0));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int x = fun(board,i,j,m,n);
                v[i][j]=x;
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int x = v[i][j];
                if(board[i][j]==1){
                    //live cell
                    if(x<2 or x>3){
                        board[i][j]=0;
                    }
                }
                else{
                    //dead cell
                    if(x==3) board[i][j]=1;
                }
            }
        }
    }
};