class Solution {
public:
    int minSteps(string s, string t) {
        
        map<char,int> mp1,mp2;
        
        for(auto &i:s){
            mp1[i]++;
        }
        
        for(auto &i:t){
            mp2[i]++;
        }
        
        int count = 0;
        set<char> st;
        for(auto &i:s) st.insert(i);
        for(auto &i:st){
            if(mp2.count(i)==0) count+=mp1[i];
            
            else{
                if(mp1[i]>mp2[i]){
                    count+=(mp1[i]-mp2[i]);
                }
            }
        }
        
        return count;
        
    }
};