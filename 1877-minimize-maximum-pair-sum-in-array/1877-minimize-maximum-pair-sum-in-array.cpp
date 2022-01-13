class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int s=0,e=nums.size()-1;
        
        int maxE=INT_MIN;
        
        while(s<=e){
            maxE = max(maxE,(nums[s]+nums[e]));
            s++;
            e--;
        }
        
        return maxE;
    }
};