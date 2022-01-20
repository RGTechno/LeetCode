class Solution {
public:
    
    vector<int> subsets(vector<int> &nums,int idx=0){
        
        if(idx==nums.size()){
            vector<int> base;
            base.push_back(0);
            return base;
        }
        
        int f = nums[idx];
        vector<int> rest = subsets(nums,idx+1);
        
        vector<int> ans;
        
        for(auto i:rest){
            int x = i xor f;
            ans.push_back(x);
        }
        
        for(auto i:rest){
            ans.push_back(i);
        }
        
        return ans;
    }
    
    int subsetXORSum(vector<int>& nums) {
        
        vector<int> hello = subsets(nums);
        
        int sum = 0;
        
        for(auto i:hello) sum+=i;
        
        return sum;
        
    }
};