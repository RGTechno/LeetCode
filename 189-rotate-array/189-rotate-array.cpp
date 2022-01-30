class Solution {
public:
    void rotate(vector<int>& nums, int k) {        
        int n = nums.size();
        
        if(k>n){
            
            while(k-n){
                int s=0,e=n-1;
        
                while(s<=e){
                    swap(nums[s],nums[e]);
                    s++;
                }
                
                k--;
            }          
            
            return;
        } 
        
        reverse(nums.begin(),nums.begin()+abs(n-k));
        reverse(nums.begin()+abs(n-k),nums.end());
        
        int s=0,e=n-1;
        
        while(s<=e){
            swap(nums[s],nums[e]);
            s++;
            e--;
        }
    }
};