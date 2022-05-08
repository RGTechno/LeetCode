class Solution {
    
    bool good(string &s){
        
        if(s.size()!=3) return false;
        
        map<char,int> mp;
        for(int i=0;i<3;i++){
            mp[s[i]]++;
        }
        
        return mp.size()==1;
    }
    
public:
    string largestGoodInteger(string num) {
        
        priority_queue<string> pq;
        
        int n = num.size();
        for(int i=0;i<n;i++){
            string tmp = num.substr(i,3);
            
            if(good(tmp)) pq.push(tmp);
        }
        
        return pq.size()==0 ? "" : pq.top();
        
    }
};