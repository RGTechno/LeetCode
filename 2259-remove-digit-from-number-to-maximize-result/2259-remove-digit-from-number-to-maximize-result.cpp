class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans;
        
        vector<int> v;
        
        int n = number.size();
        
        for(int i=0;i<n;i++){
            if(number[i]==digit){
                v.push_back(i);
            }
        }
        
        priority_queue<string> pq;
        
        for(auto &i:v){
            string l = number.substr(0,i);
            string r = number.substr(i+1,n-i-1);
            
            string tmp = l+r;
            
            pq.push(tmp);
        }
        
        return pq.top();
    }
};