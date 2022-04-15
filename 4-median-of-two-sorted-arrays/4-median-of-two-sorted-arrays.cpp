class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> v;
        
        int s1=0,s2=0,e1=nums1.size()-1,e2=nums2.size()-1;
        
        while(s1<=e1 and s2<=e2){
            if(nums1[s1]<nums2[s2]){
                v.push_back(nums1[s1]);
                s1++;
            }
            else{
                v.push_back(nums2[s2]);
                s2++;
            }
        }
        
        while(s1<=e1){
            v.push_back(nums1[s1]);
            s1++;
        }
        
        while(s2<=e2){
            v.push_back(nums2[s2]);
            s2++;
        }
        
        int n = v.size();
                
        if(n&1){
            return v[(n/2)];
        }
        else{
            double ans = (v[n/2]+v[(n/2)-1])/(2*1.0);
            return ans;
        }
        
    }
};