class Solution {
public:
    string codes[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    int uniqueMorseRepresentations(vector<string>& words) {
        int n=words.size();
        
        set<string> st;
        
        for(int i=0;i<n;i++){
            string s="";
            for(int j=0;j<words[i].size();j++){
                s+=codes[words[i][j]-'a'];
            }
            st.insert(s);
        }
        
        return st.size();
    }
};