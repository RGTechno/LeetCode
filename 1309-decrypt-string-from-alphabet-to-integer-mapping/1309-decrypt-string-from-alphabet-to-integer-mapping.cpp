class Solution {
public:
    string freqAlphabets(string s) {
        
        int n = s.size();
        
        string ans;
        
        for(int i=n-1;i>=0;i--){
            if(s[i]=='#'){
                string tmp = s.substr(i-2,2);
                int t = stoi(tmp);
                ans.push_back('a'+t-1);
                i-=2;
            }
            else{
                int t = s[i]-'0';
                ans.push_back('a'+t-1);
            }
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};