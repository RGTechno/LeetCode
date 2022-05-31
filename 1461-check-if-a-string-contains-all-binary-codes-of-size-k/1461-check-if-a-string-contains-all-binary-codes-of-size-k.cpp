class Solution {
    void substrings(set<string> &st,string &s,int k,int idx=0){
        
        if(idx==k){
            st.insert(s);
            return;
        }
        
        for(int i=idx;i<k;i++){
            s.push_back('0');
            substrings(st,s,k,idx+1);
            s.pop_back();
            s.push_back('1');
            substrings(st,s,k,idx+1);
            s.pop_back();
        }  
        
    }
public:
    bool hasAllCodes(string s, int k) {
        
        set<string> st;
        string str;        
        // substrings(st,str,k);
        int n = s.size();
        for(int i=0;i<n;i++){
            str = s.substr(i,k);
            if(str.size()==k) st.insert(str);
        }
        
        int total = pow(2,k);
        
        return total==st.size();        
    }
};