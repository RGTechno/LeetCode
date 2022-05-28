class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        vector<bool> v(n+1,false);
        for(int i=0;i<n;i++){
            v[nums[i]]=true;            
        }
        
        for(auto i=0;i<v.size();i++){
            if(!v[i]) return i;
        }
        
        return 0;
    }
};