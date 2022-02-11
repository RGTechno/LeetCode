class Solution {
    
    bool good(map<char,int> mp1, string &s2,string &s1){
        map<char,int> mp2;
        
        // cout<<s2<<endl;
                
        for(auto &i:s2){
            mp2[i]++;
            // cout<<i<<"-"<<mp2[i]<<endl;
        }
        
        for(auto &i:s1){
            if(!mp2.count(i)) return false;
            
            if(mp2[i]!=mp1[i]) return false;
        }
        
        return true;
    }
    
public:
    bool checkInclusion(string s1, string s2)
    {

        map<char, int> mp1;

        for (auto &i : s1)
        {
            mp1[i]++;
        }

        int n = s1.size();

        int count = mp1.size();

        int s = 0, e = s2.size() - 1;
        int m = 0;

        while (m<=e)
        {
            if (mp1.count(s2[m]))
            {
                mp1[s2[m]]--;
                if (mp1[s2[m]] == 0) count--;
            }
            if (m - s + 1 < n) m++;
            
            else if (m - s + 1 == n)
            {
                if (count == 0)
                {
                    return true;
                }
                if (mp1.count(s2[s]))
                {
                    mp1[s2[s]]++;
                    if (mp1[s2[s]] == 1) count++;
                }
                s++;
                m++;
            }
        }

        return false;
    }
};