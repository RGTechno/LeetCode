class Solution {
public:    
    void yssir(vector<char>& h,int i=0) {
        if(i==h.size()) return;
        
        char first = h[i];
        
        yssir(h,i+1); 
    
        h.push_back(first);
    }
    void reverseString(vector<char>& s) {
        vector<char> h;
        for(auto i:s) h.push_back(i);
        yssir(h);
        
        for(int i=0;i<s.size();i++){
            s[i]=h[i+s.size()];
        }
    }
};