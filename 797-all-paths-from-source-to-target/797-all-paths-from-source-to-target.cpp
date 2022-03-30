class Solution {
    
    vector<int> v;
    
    void dfs(vector<vector<int>> &adj, int source, int target, vector<vector<int>> &ans){
                
        if(source==target){
            v.push_back(source);
            ans.push_back(v);
            v.pop_back();
            return;
        }
        
        v.push_back(source);        
        for(auto &i:adj[source]){
            dfs(adj,i,target,ans);
        }        
        v.pop_back();
    }
    
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        int n = graph.size();
        
        vector<vector<int>> adj(n,vector<int>());
        
        for(int i=0;i<n;i++){
            for(auto &j:graph[i]){
                adj[i].push_back(j);
            }              
        }
        
        vector<vector<int>> ans;
        
        dfs(adj,0,n-1,ans);
        
        return ans;
    }
};