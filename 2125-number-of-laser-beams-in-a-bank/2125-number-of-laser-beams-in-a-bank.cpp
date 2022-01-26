class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        vector<int> v;
        
        for(int i=0;i<bank.size();i++){
            int count1 = 0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1') count1++;
            }
            if(count1>0) v.push_back(count1);
        }
        
        if(v.size()==0) return 0;
        
        int ans=0;
        
        for(int i=0;i<v.size()-1;i++){
            ans+=(v[i]*v[i+1]);
        }
        
        return ans;
    }
};