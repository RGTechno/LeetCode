class Solution {
public:
    bool isValid(string s) {
        
        stack<char> stk;
        
        for(auto &i:s){
            if(i=='(' or i=='{' or i=='['){
                stk.push(i);
            }
            else{
                if(i==')'){
                    if(!stk.size()){
                        stk.push(i);
                        continue;
                    }
                    if(stk.top()!='(') return false;
                    stk.pop();
                }
                else if(i=='}'){
                    if(!stk.size()){
                        stk.push(i);
                        continue;
                    }
                    if(stk.top()!='{') return false;
                    stk.pop();
                }
                else if(i==']'){
                    if(!stk.size()){
                        stk.push(i);
                        continue;
                    }
                    if(stk.top()!='[') return false;
                    stk.pop();
                }
            }
        }
        return stk.size()==0;
    }
};