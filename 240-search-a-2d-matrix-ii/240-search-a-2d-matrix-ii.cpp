class Solution {
    bool bs(vector<int> &v,int k){
        int l=-1,r=v.size();
        while(r-l>1){
            int m = (l+r)/2;
            if(v[m]==k) return true;
            if(v[m]>k) r=m;
            else l=m;
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(auto &i:matrix){
            if(bs(i,target)) return true;
        }
        
        return false;
        
    }
};