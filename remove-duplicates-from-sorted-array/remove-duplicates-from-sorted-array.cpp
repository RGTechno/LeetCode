class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size()==0) return 0;
        
        int s=0,e=nums.size()-1;
        int m=s+1;
        
        while(m<=e){
            if(nums[s]==nums[m]){
                m++;
            }
            else{
                nums[s+1]=nums[m];
                s++;
                m++;
            }
        }
        
        return s+1;
        
    }
};