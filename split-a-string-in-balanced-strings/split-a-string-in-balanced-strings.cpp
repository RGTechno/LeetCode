class Solution {
public:
    int balancedStringSplit(string s) {
        
        int count=0;
        
        for(int i=0;i<s.size();i++){
            int countR=0,countL=0;
            for(int j=i;j<s.size();j++){
                
                if(s[j]=='R'){
                    countR++;
                }else if(s[j]=='L'){
                    countL++;
                }
                
                if(countL==countR) {
                    count++;
                    i=j;
                    break;
                }
                
            }
        }
        
        return count;
        
    }
};