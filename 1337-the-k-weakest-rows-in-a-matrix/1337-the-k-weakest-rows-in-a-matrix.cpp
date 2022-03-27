class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        set<pair<int,int>> st;
        
        for(int i=0;i<mat.size();i++){
            
            int l=-1, r=mat[i].size();
            
            while(r-l>1){
                int m=(l+r)/2;
                
                if(mat[i][m]==0){
                    r=m;
                }
                else{
                    l=m;
                }
            }
            
            // cout<<l+1<<" - "<<i<<endl;
            
            st.insert({l+1,i}); 
        }
        
        int i=0;
        
        vector<int> ans;
        
        for(auto &it:st){
            if(i==k) break;
            ans.push_back(it.second);
            i++;
        }
        
        return ans;
        
    }
};