class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        int n = arr.size();
        
        int d=n/2;
        
        map<int,int> mp;
        for(auto &i:arr){
            mp[i]++;
        }
        
        priority_queue<int> pq;
        
        for(auto &i:mp){
            pq.push(i.second);
        }
        
        int count = 0;
        
        while(pq.size()!=0 and d>0){
            int t = pq.top();
            pq.pop();
            d-=t;
            count++;
        }
        
        return count;      
        
        
    }
};