class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        set<char> st;
        
        for(auto i:allowed){
            st.insert(i);
        }
        
        int count=0;
        
        for(int i=0;i<words.size();i++){
            int j;
            for(j=0;j<words[i].size();j++){
                if(st.count(words[i][j])==0){
                    break;
                }
            }
            if(j==words[i].size()) count++;
        }
        
        return count;
    }
};