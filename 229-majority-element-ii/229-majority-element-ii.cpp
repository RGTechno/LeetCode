class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        
        map<int,int> mp;
        for(auto &i:nums){
            mp[i]++;
        }
        
        vector<int> ans;
        for(auto &i:mp){
            if(i.second>n/3) ans.push_back(i.first);
        }
        
        return ans;
    }
};