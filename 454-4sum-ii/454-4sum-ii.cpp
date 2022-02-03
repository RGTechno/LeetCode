class Solution {
public: 

    // O(N^2)
    
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {        
        
        map<int,int> mp;
        
        int count = 0;
        
        for(auto i:nums1){
            for(auto j:nums2){
                mp[(i+j)]++;
            }
        }
        
        for(auto i:nums3){
            for(auto j:nums4){
                if(mp.count(-(i+j))){
                    count+=mp[-(i+j)];
                }
            }
        }        
        
        return count;
    }
    
/*

    O(N^3)
    
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {        
        map<int,int> mp;
        
        for(auto i:nums4){
            mp[i]++;
        }
        
        int n=nums1.size();
        
        int count = 0;        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    long long int sum = nums1[i]+nums2[j]+nums3[k];
                    
                    long long int find = (-1)*sum;
                    
                    // OR BINARY SEARCH ON NUMS4
                    
                    if(mp.count(find)){
                        count++;
                    }
                }
            }
        }
        
        return count;       
        
    }
*/
};