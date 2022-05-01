class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        
        map<int,vector<int>> mp;
        
        int n = cards.size();
        
        for(int i=0;i<n;i++){
            mp[cards[i]].push_back(i);
        }
        
        if(mp.size()==n) return -1;
        
        int diff = INT_MAX;
        
        for(auto &i:mp){
            
            if(i.second.size()>1){
                for(int j=1;j<i.second.size();j++){
                    diff = min(((i.second[j]-i.second[j-1])+1),diff);
                }
            }
            
        }
        
        return diff;
        
    }
};