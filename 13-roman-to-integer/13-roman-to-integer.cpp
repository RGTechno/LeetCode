class Solution {
    map<char,int> mp;
public:
    Solution(){
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
    }
    int romanToInt(string s) {
        
        int n = s.size();
        
        int sum = 0;
        for(int i=0;i<n;){
            if(mp[s[i]]<mp[s[i+1]]){
                sum+=(mp[s[i+1]]-mp[s[i]]);
                i+=2;
            }
            else{
                sum+=mp[s[i]];
                i++;
            }
        }
        
        return sum;
        
    }
};