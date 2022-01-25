class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int n=arr.size();
        
        if(n<3) return false;
        
        int peak=-1;
        
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]) return false;
            if(arr[i+1]>arr[i]){
                peak=i+1;
            }
            else{
                break;
            }
        }
        
        if(peak==-1 or peak==n-1) return false;
        
        for(int i=peak;i<n-1;i++){
            if(arr[i]<=arr[i+1]){
                return false;
            }
        }
        
        return true;
        
    }
};