class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> pq;
        
        for(auto &i:stones){
            pq.push(i);
        }
        
        while(pq.size()>1){
            int t1 = pq.top();
            pq.pop();
            int t2 = pq.top();
            pq.pop();
            
            if(t1==t2){
                continue;
            }
            else{
                pq.push(t1-t2);
            }
        }
        
        if(pq.size()) return pq.top();
        
        return 0;
        
    }
};