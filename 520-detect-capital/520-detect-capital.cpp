class Solution {
public:
    bool detectCapitalUse(string word) {
        
        // if first capital
           // 1. Either only first
           // 2. All
        
        if(isupper(word[0])){
            if(isupper(word[1])){
                // all caps
                for(int i=2;i<word.size();i++){
                    if(islower(word[i])){
                        return false;
                    }
                }
            }
            else{
                // only first cap
                for(int i=2;i<word.size();i++){
                    if(isupper(word[i])){
                        return false;
                    }
                }
            }
        }
        
        
        // else all small
        
        else{
            for(int i=1;i<word.size();i++){
                if(isupper(word[i])){
                    return false;
                }
            }
        }
        
        return true;
    }
};