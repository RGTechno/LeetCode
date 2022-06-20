class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count = 0;
        int n = nums.size();
        
        int mx = 0;
        
        for(int i=n-1;i>=0;i--){
            if(nums[i]==1){
                count++;
                mx = max(mx,count);
            }
            else count = 0;
        }
        
        return mx;
        
    }
};