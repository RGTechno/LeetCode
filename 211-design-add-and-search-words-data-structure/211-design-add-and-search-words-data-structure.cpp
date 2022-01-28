class WordDictionary {
    map<int,set<string>> mp;
public:
    WordDictionary() {
        mp={};        
    }
    
    void addWord(string word) {
        int n = word.size();
        
        if(mp.count(n)){
            mp[n].insert(word);
        }
        else{
            mp[n] = {word};
        }
    }
    
    bool good(string a,string b,int n){
        // returns true if a==b;
        
        for(int i=0;i<n;i++){
            if(a[i]!=b[i] and a[i]!='.') return false;
        }
        
        return true;
    }
    
    bool search(string word) {
        
        int n = word.size();
        
        if(!mp.count(n)) return false;
        
        set<string> st = mp[n];
        
        for(auto &i:st){
            if(good(word,i,n)) return true;
        }
        
        return false;        
        
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */