class Solution {
public:
    int startingIndex(vector<int> &a,int x){
        int l=-1,r=a.size();
        
        while(r-l>1){
            int mid = (l+r)/2;
            if(a[mid]>=x){
                r=mid;
            }else{
                l=mid;
            }
        }
        return r;
    }
    
    int endingIndex(vector<int> &a,int x){
        int l=-1,r=a.size();
        
        while(r-l>1){
            int mid = (l+r)/2;
            if(a[mid]<=x){
                l=mid;
            }else{
                r=mid;
            }
        }
        return l;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int sI = startingIndex(nums,target);
        int eI = endingIndex(nums,target);
        if(sI!=nums.size()&&eI!=-1&&nums[sI]==target){
           ans.push_back(sI);
           ans.push_back(eI); 
        }else{
            ans.push_back(-1);
            ans.push_back(-1);
        }       
        
        return ans;
    }
};