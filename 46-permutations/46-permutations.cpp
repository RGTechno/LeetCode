class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums,int idx=0) {
        
        if(idx==nums.size()){
            vector<vector<int>> base;
            base.push_back(vector<int>());            
            return base;
        }
        
        
        int f = nums[idx];
        
        vector<vector<int>> rest = permute(nums,idx+1);
        
        vector<vector<int>> ans;
        
        for(int i=0;i<rest.size();i++){
            int n = rest[i].size();            
            int req = n+1;
            
            vector<int> sub(req);
            
            for(int j=0;j<req;j++){
                sub[j]=f;
                for(int k=0;k<j;k++){
                    sub[k]=rest[i][k];
                }
                for(int k=j+1;k<req;k++){
                    sub[k]=rest[i][k-1];
                }
                
                ans.push_back(sub);
            }            
        }
        
        return ans;
    }
};