class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        if(nums.size()<3) return 0;
        
        int n = nums.size();
        int count = 0;
        
        for(int i=0;i<n-1;i++){
            int p = i;
            int diff = nums[i+1]-nums[p];
            for(int j=i+1;j<n;j++){  
                if(nums[j]-nums[p]!=diff) break;
                else if(nums[j]-nums[p]==diff and j-i+1>=3) count++;
                p++;
            }
        }
        
        return count;
        
    }
};