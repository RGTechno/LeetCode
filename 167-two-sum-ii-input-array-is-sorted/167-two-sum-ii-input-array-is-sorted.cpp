class Solution {
    int binarySearch(vector<int> &v,int i,int n,int k){
        int l=i,r=n;
        while(r-l>1){
            int m = (l+r)/2;
            if(v[m]==k) return m;
            if(v[m]>k){
                r=m;
            }
            else l=m;
        }
        return -1;
    }
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n = numbers.size();
        for(int i=0;i<n;i++){
            int k = target-numbers[i];
            int t = binarySearch(numbers,i,n,k);
            if(t!=-1) return {i+1,t+1};
        }
        
        return {};
        
    }
};