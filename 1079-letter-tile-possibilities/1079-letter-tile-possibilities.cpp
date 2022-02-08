class Solution {
    
    void solve(string tiles,string str, set<string> &ans){
        
        int n = tiles.size();
        
        if(n==0){
            return;
        }
                
        for(int i=0;i<n;i++){
            char ch = tiles[i];
            string l = tiles.substr(0,i);
            string r = tiles.substr(i+1,n-i-1);
            
            string sub = l+r;
            
            solve(sub,str+ch,ans);
            
            ans.insert(str+ch);
            
            // cout<<(str+ch)<<endl;
        }        
    }
    
public:
    int numTilePossibilities(string tiles) {
        
        set<string> st;
        solve(tiles,"",st);
        
//         for(auto i:st) cout<<i<<" ";
        
//         cout<<endl;
        
        return st.size();
        
    }
};