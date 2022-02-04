class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int n = nums.size();
        
        map<int,int> mp;
        
        mp[0]=-1;
        
        int mx = 0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0) nums[i]=-1;            
        }
        
        int sum_till_i=0;
        
        for(int i=0;i<n;i++){
            sum_till_i+=nums[i];
            
            if(mp.count(sum_till_i)){
                mx = max(mx,i-mp[sum_till_i]);
            }
            else{
                mp[sum_till_i]=i;
            }
        }
        
        return mx;        
        
    }
};