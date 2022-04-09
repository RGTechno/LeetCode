class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int> mp;
        
        for(auto &i:nums){
            mp[i]++;
        }
        
        priority_queue<pair<int,int>> pq;
        
        for(auto &i:mp){
            pq.push({i.second,i.first});
        }
        
        vector<int> ans;
        
        while(k--){
            auto t = pq.top();
            pq.pop();
            ans.push_back(t.second);
        }
        
        return ans;
        
    }
};