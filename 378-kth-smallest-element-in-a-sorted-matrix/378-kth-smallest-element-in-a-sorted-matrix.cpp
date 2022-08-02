class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        vector<int> v;
        
        for(auto &i:matrix){
            for(auto &j:i){
                v.push_back(j);
            }
        }
        
        sort(v.begin(),v.end());
        
        for(auto &i:v){
            k--;
            if(k==0) return i;
        }
        return 0;
    }
};