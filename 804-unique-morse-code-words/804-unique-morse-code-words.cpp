class Solution {
    vector<string> v;
public:
    Solution(){
        v = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    }
    int uniqueMorseRepresentations(vector<string>& words) {
        
        set<string> st;
        
        for(auto &i:words){
            string s="";
            for(auto &j:i){
                s+=v[j-'a'];
            }
            st.insert(s);
        }
        
        return st.size();
        
    }
};