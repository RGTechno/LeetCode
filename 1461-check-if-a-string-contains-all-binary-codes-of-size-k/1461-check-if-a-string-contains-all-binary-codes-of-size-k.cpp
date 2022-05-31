class Solution {      
public:
    bool hasAllCodes(string s, int k) {
        
        set<string> st;
        string str;        
        int n = s.size();
        for(int i=0;i<n;i++){
            str = s.substr(i,k);
            if(str.size()==k) st.insert(str);
        }
        
        int total = pow(2,k);
        
        return total==st.size();        
    }
};