class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count = 0;  // number of majority element + minority element    
        // if count = 0 i.e majority element not found yet
        int majorityEle = 0;
        
        for(auto &i:nums){
            if(count==0) majorityEle = i;
            if(majorityEle == i) count++;
            else count--;
        }
        
        return majorityEle;
        
    }
};