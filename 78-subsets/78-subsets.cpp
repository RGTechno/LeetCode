class Solution {
    vector<vector<int>> solve(vector<int>& nums,int idx){
        
        if(idx==0){
            vector<vector<int>> base;
            base.push_back(vector<int>());
            
            return base;
        }
        
        int f = nums[idx-1];
        vector<vector<int>> rest = solve(nums,idx-1);
        
        vector<vector<int>> ans;
        
        for(auto i:rest){
            ans.push_back(i);
        }
        
        for(auto i:rest){
            i.push_back(f);
            ans.push_back(i);
        }
        
        return ans;       
        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        return solve(nums,nums.size());
                
    }
};