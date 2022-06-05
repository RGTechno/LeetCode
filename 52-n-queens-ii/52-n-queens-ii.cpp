class Solution {
    
    bool good(vector<string> &v,int n,int r,int c){
        //vertical
        for(int i=0;i<n;i++){
            if(v[i][c]=='Q') return false;
        }
        
        //horizontal
        for(int j=0;j<n;j++){
            if(v[r][j]=='Q') return false;
        }
        
        //right upper diagonal
        int i=r-1,j=c+1;
        while(i>=0 and j<n){
            if(v[i--][j++]=='Q') return false;
        }
        
        //right lower diagonal
        i=r+1,j=c+1;
        while(i<n and j<n){
            if(v[i++][j++]=='Q') return false;
        }
        
        //left lower diagonal
        i=r+1,j=c-1;
        while(i<n and j>=0){
            if(v[i++][j--]=='Q') return false;
        }
        
        //left upper diagonal
        i=r-1,j=c-1;
        while(i>=0 and j>=0){
            if(v[i--][j--]=='Q') return false;
        }
        
        return true;
    }
    
    void solve(vector<string> &v,int n,int &ans,int row=0){
        
        if(row==n){
            ans+=1;
        }
        
        for(int i=row;i<n;i++){
            int j;
            for(j=0;j<n;j++){
                if(good(v,n,i,j)){
                    v[i][j]='Q';
                    solve(v,n,ans,row+1);
                    v[i][j]='.';
                }
            }
            if(j==n){
                v[i][j]='.';
                return;
            }
        }
    }
public:
    int totalNQueens(int n) {
        vector<string> v(n);
        
        for(int i=0;i<n;i++){
            string s(n,'.');
            v[i]=s;
        }
        
        int ans = 0;
        solve(v,n,ans);
        
        return ans;
    }
};