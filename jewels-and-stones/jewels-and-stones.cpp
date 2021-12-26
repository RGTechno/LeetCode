class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int e1=jewels.size();
        int e2=stones.size();
        
        int count=0;
        
        for(int s1=0;s1<e1;s1++){
            for(int s2=0;s2<e2;s2++){
                if(jewels[s1]==stones[s2]) count++;
            }
        }
        
        return count;
        
    }
};