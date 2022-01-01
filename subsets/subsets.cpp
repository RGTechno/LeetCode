class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums,int index=0) {
        
        if(index==nums.size()){
            vector<vector<int>> base;
            base.push_back(vector<int>());
            
            return base;
        }
        
        
        int first = nums[index];
        
        vector<vector<int>> sub = subsets(nums,index+1);
        
        vector<vector<int>> ans;
        
        //include
        for(auto i:sub){
            i.push_back(first);
            ans.push_back(i);
        }
        
        
        //not include
        for(auto i:sub){
            ans.push_back(i);
        }
        
        return ans;
    }
};