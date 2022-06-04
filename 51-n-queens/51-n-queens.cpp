class Solution {
    vector<vector<string>> ans;
    
    bool good(vector<string> &v,int n,int r,int c){
        
        //vertical
        for(int i=0;i<n;i++){
            if(v[i][c]=='Q') return false;
        }
        
        //horizontal
        for(int j=0;j<n;j++){
            if(v[r][j]=='Q') return false;
        }
        
        // right upper diagonal
        int i=r-1,j=c+1;
        while(i>=0 and j<n){
            if(v[i--][j++]=='Q') return false;
        }
        
        // left upper diagonal
        i=r-1,j=c-1;
        while(i>=0 and j>=0){
            if(v[i--][j--]=='Q') return false;
        }
                
        // right lower diagonal
        i=r+1,j=c+1;
        while(i<n and j<n){
            if(v[i++][j++]=='Q') return false;
        }
            
        // left lower diagonal
        i=r+1,j=c-1;
        while(i<n and j>=0){
            if(v[i++][j--]=='Q') return false;
        }
        
        return true;
    }
    
    void print(vector<string> &v){
        for(auto &i:v) cout<<i<<endl;
    }
    
    void solve(vector<string> &v,int n,int row=0){
        
        print(v);
        cout<<"----\n"<<row<<endl;
        
        if(row==n){
            // print(v);
            // cout<<"-----\n";
            ans.push_back(v);
            return;
        }
        
        for(int i=row;i<n;i++){
            int j;
            for(j=0;j<n;j++){
                cout<<"("<<i<<","<<j<<")\n";
                if(good(v,n,i,j)){
                    cout<<v[i][j]<<"=>";
                    v[i][j]='Q';
                    cout<<v[i][j]<<endl;
                    solve(v,n,i+1);
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
    vector<vector<string>> solveNQueens(int n) {
        
        vector<string> v(n);
        for(int i=0;i<n;i++){
            string s(n,'.');
            v[i]=s;
        }
        
        solve(v,n);
        
        return ans;
    }
};