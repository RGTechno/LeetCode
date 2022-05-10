class Solution {
        
    void solve(vector<vector<int>> &ans,vector<int> &v,int &k,int &n,int cur=1){
        
        if(v.size()==k){
            int sum = 0;
            for(auto &i:v) sum+=i;
            
            if(sum==n) ans.push_back(v);           
                
            return;
        }
        
        if(cur>9 or cur>n) return; 
        
        for(int i=cur;i<=9;i++){            
            v.push_back(i);
            solve(ans,v,k,n,i+1);
            v.pop_back();
        }       
    }
    
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> v;
        
        int smallest_sum = (k*(k+1))/2;
        
        if(smallest_sum>n){
            return ans;
        }
        
        solve(ans,v,k,n);
        return ans;
    }
};