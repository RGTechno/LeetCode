class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        
        int s=0,e=n-1;
        int m=s;
        
        while(m<=e and s<=e){
            if(nums[m]==0){
                swap(nums[s],nums[m]);
                m++;
                s++;
            }
            else if(nums[m]==2){
                swap(nums[m],nums[e]);
                // m++;
                e--;
            }
            else m++;
        }
        
    }
};