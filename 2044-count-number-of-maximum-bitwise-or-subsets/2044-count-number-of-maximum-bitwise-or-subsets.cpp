class Solution {
public:   
    vector<int> subsetsCount(vector<int> &arr,int idx,int maxOr){
        
        if(idx==arr.size()){
            vector<int> base;
            base.push_back(0);
            return base;
        }
        
        int f = arr[idx];
        vector<int> rest = subsetsCount(arr,idx+1,maxOr);
        
        vector<int> ans;
        
        for(auto i:rest){
            int n = i | f;
            ans.push_back(n);
        }
        
        for(auto i:rest){
            ans.push_back(i);
        }
        
        return ans;
        
    }
    
    int countMaxOrSubsets(vector<int>& nums) {
        
        int maxOr=0;
        
        for(int i=0;i<nums.size();i++){
            maxOr = maxOr | nums[i];
        }
        
        vector<int> hello = subsetsCount(nums,0,maxOr);
        
        int count=0;
        
        for(auto i:hello) {
            if(i==maxOr) count++;
        }
        
        return count;        
        
    }
};