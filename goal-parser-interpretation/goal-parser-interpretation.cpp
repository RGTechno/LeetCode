class Solution {
public:
    string interpret(string command) {
        
        string ans;
        
        int n=command.size();
        
        for(int i=0;i<n;i++){
            if(command[i]=='G') ans.push_back('G');
            else if(command[i]=='(' and command[i+1]==')') {
                ans.push_back('o');
                i+=1;
            }
            else {
                ans+="al";
                i+=3;
            }
        }
        
        return ans;
        
    }
};