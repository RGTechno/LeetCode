class Solution {
    
    bool lower(string &s){
        for(auto &i:s){
            if(islower(i)) return true;
        }
        return false;
    }
    
    bool upper(string &s){
        for(auto &i:s){
            if(isupper(i)) return true;
        }
        return false;
    }
    
    bool digit(string &s){
        for(auto &i:s){
            if(isdigit(i)) return true;
        }
        return false;
    }
    
    bool spec(string &s){
        set<char> st = {'!','@','#','$','%','^','&','*','(',')','-','+'};
        for(auto &i:s){
            if(st.count(i)) return true;
        }
        return false;
    }
    
    bool adj(string &s){
        int n=s.size();
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]) return false;
        }
        return true;
    }
    
    
    
public:
    bool strongPasswordCheckerII(string password) {
        
        int n = password.size();
        if(n<8) return false;
        
        if(!lower(password)) {
            cout<<"lower\n";
            return false;
        }
        if(!upper(password)) {
            cout<<"upper\n";
            return false;
        }
        if(!digit(password)) {
            cout<<"digit\n";
            return false;
        }
        if(!spec(password)) {
            cout<<"spec\n";
            return false;
        }
        
        if(!adj(password)) {
            cout<<"hello\n";
            return false;
        }
        
        return true;
        
    }
};