class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        
        for(auto i:nums) mp[i]++;
        
        int ans;
        
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->second != 2) {
                ans = i->first;
                break;
            }
        }
        
        return ans;
    }
};