class Solution {
public:
    int compareVersion(string version1, string version2) {
        
        int s1=0,e1=version1.size()-1;
        int s2=0,e2=version2.size()-1;
        
        int n1=0,n2=0;
        
        while(s1<=e1 or s2<=e2){
            while(s1<=e1 and version1[s1]!='.'){
                n1 = n1*10 + (version1[s1]-'0');
                s1++;
            }
            
            while(s2<=e2 and version2[s2]!='.'){
                n2 = n2*10 + (version2[s2]-'0');
                s2++;
            }
            
            if(n1>n2) return 1;
            if(n2>n1) return -1;
            
            n1=0;
            n2=0;
            
            s1++;
            s2++;
        }
        
        return 0;
        
    }
};