class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int r = nums.size();
        int l=-1;
        
        if(r==1) return nums[0];
        
        while(r-l>1){
            int m = (l+r)/2;
            
            if(m&1){
                if(nums[m]!=nums[m+1]){
                    l=m;
                }
                else{
                    r=m;
                }
            }
            else{
                if(nums[m]==nums[m+1]){
                    l=m;
                }
                else{
                    r=m;
                }
            }
            
        }
        
        return nums[r];       
    }
};