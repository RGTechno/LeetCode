class Solution {
public:
    
    // void display(vector<vector<int>> & v){
    //     for(int i=0;i<v.size();i++){
    //         for(int j=0;j<v[i].size();j++){
    //             cout<<v[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    
    void change(vector<vector<int>> & v,int r,int c){
                        
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                if(i==r){
                    v[i][j]++;
                }
                if(j==c) v[i][j]++;
            }
        }
    }
    
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> v(m,vector<int>(n,0));
        
        for(int i=0;i<indices.size();i++){
            int r = indices[i][0];
            int c = indices[i][1];
            
            change(v,r,c);
        }
        
        int count = 0;      
        
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]&1){
                    count++;
                }
            }
        }
        
        return count;
        
    }
};