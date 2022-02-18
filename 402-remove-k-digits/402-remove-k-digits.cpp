class Solution {
public:
    string removeKdigits(string num, int k) {
        
        if(num.size()==k) return "0";
        
        stack<char> stk;
        
        int n = num.size();
        
        for(int i=0;i<n;i++){
            
            while(stk.size() and stk.top()>num[i] and k){
                stk.pop();
                k--;
            }
            
            if(stk.size() or num[i]!='0') stk.push(num[i]);
        }
        
        while(stk.size() and k){
            stk.pop();
            k--;
        }
        
        string ans="";
        
        while(!stk.empty()){
            char t = stk.top();
            stk.pop();
            
            ans=t+ans;
        }
        
        
        if(ans=="") return "0";        
        
        //removing leading zeros
        int i=0;
        while(ans[i]=='0'){
            i++;
        }
        
        int ansSize = ans.size();
        ans = ans.substr(i,ansSize-i);
        
        return ans;
        
    }
};