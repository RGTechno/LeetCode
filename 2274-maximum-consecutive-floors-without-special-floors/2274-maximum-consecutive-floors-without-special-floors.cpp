class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        
        sort(special.begin(),special.end());
        
        int n = special.size();
        
        int start = special[0]-bottom;
        int end = top-special[n-1];
        
        int max_count = INT_MIN;
        
        for(int i=1;i<n;i++){
            int count = (special[i]-special[i-1])-1;
            
            max_count = max(max_count,count);
        }
        
        return max(max_count,max(start,end));
    }
};