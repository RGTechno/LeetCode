class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string w1,w2;
        
        for(auto i:word1) w1+=i;
        for(auto i:word2) w2+=i;
        
        if(w1==w2) return true;
        return false;
        
    }
};