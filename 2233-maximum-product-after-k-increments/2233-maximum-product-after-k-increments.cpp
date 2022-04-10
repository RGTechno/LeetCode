class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        
        int mod = 1e9+7;
        
        priority_queue<int,vector<int>,greater<int>> pq;
        
        for(auto &i:nums){
            pq.push(i);
        }
        
        while(k--){
            auto t = pq.top();
            pq.pop();
            t++;
            
            pq.push(t);
        }
        
        long long int ans=1;
        
        while(!pq.empty()){
            auto t = pq.top();
            pq.pop();
            
            ans = (ans*t)%mod;
        }
        
        return ans;
        
    }
};