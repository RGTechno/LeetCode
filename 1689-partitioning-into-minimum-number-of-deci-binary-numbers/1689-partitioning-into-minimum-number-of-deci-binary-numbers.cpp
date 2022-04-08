class Solution {
public:
    int minPartitions(string s) {
        
        int n = s.size(); // n-digit deci-binary's  req
        
        sort(s.begin(),s.end());
        
        return s[n-1]-'0';
        
    }
};