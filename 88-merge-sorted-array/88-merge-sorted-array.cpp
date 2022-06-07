class Solution {
    
    void shift(vector<int> &v,int i,int m){
        for(int j=m;j>i;j--){
            v[j]=v[j-1];
        }
    }
    
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i=0,j=0;
        while(i<m and j<n){
            if(nums1[i]>nums2[j]){
                shift(nums1,i,m);
                nums1[i]=nums2[j];
                m++;
                j++;
            }
            i++;
        }
        
        while(j<n){
            nums1[i++]=nums2[j++];
        }
        
    }
};