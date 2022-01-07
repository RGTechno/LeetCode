class Solution {
public:
    char shift(char abc,int i){
        return abc+i;
    }
    string replaceDigits(string &s) {
        
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                // cout<<shift(s[i-1],i)<<endl;
                s[i]=shift(s[i-1],s[i]-'0');
            }
        }
        return s;
    }
};