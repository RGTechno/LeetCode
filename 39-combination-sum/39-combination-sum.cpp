class Solution {
    vector<int> temp;
        
    void solve(vector<int>& arr, int n, int target,vector<vector<int>> &ans){
        
        if(target<0) return;
        
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        
        if(n==0) return;   
                
        if(arr[n-1]<=target){
            // take
            temp.push_back(arr[n-1]);
            solve(arr,n,(target-arr[n-1]),ans);
            temp.pop_back();
            
            // don't take
            solve(arr,n-1,target,ans);
        }
        
        else solve(arr,n-1,target,ans);
        
    }
public:   
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        int n = candidates.size();
        
        vector<vector<int>> ans;
        
        solve(candidates,n,target,ans);
        
        return ans;
        
    }
};