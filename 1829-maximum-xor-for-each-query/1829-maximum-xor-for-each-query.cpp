class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        
        vector<int> p(nums.size());
        
        p[0]=nums[0];
        
        for(int i=1;i<nums.size();i++){
            p[i]=p[i-1] xor nums[i];
        }
        
        long long int max = pow(2,maximumBit)-1;
        
        vector<int> ans;
        
        for(int i=p.size()-1;i>=0;i--){
            int x = p[i] xor max;
            
            ans.push_back(x);
        }
        
        return ans;
    }
};