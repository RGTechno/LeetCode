class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int s=0,e=arr.size()-1;
        
        int max = 0;
        
        for(int i=0;i<=e;i++){
            if(arr[i]>arr[max]){
                max = i;
            }
        }
        
        return max;
    }
};