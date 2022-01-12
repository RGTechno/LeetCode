class Solution {
public:
    string sortSentence(string s) {
        
        vector<string> strings(10,"blah");
        
        int st=0,e=s.size()-1;
        
        int i=0;
        
        while(i<=e){
          
            if(isdigit(s[i])){
                string str = s.substr(st,i-st);
                
                int idx = (s[i]-'0');
                
                strings[idx] = (str+" ");
                
                st=i+2;
            }
            
            i++;
        }
        
        string ans="";
        
        for(auto i:strings){
            if(i!="blah"){
                ans+=(i);
            }
        }
        
        ans = ans.substr(0,ans.size()-1);
        
        return ans;
    }
};