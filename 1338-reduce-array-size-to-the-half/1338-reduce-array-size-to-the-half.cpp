class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        map<int,int> mp;
        
        for(auto &i:arr){
            mp[i]++;
        }
        
        int n = arr.size();
        
        priority_queue<pair<int,int>> pq;
        
        for(auto &i:mp){
            pq.push({i.second,i.first});
        }
        
        int req_size = n/2;
        
        int count = 0;
        
        while(n>req_size){
            pair<int,int> t = pq.top();
            
            pq.pop();
            
            n-=t.first;
            
            count++;
        }
        
        return count;      
        
        
    }
};