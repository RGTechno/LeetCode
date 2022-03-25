class Solution {
public:
    string frequencySort(string s) {
        
        map<char,int> mp;
        
        for(auto &i:s){
            mp[i]++;
        }
        
        priority_queue<pair<int,char>> pq;
        
        for(auto &i:mp){
            pq.push({i.second,i.first});
        }
        
        string ans;
        
        while(!pq.empty()){
            pair<int,char> t = pq.top();
            pq.pop();
            
            int i=0;
            
            while(i<t.first){
                ans.push_back(t.second);
                i++;
            }
        }
        
        return ans;       
    }
};