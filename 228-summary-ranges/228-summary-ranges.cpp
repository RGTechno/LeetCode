class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        if(nums.size()==0) return vector<string>();        
        int s=0,e=nums.size()-1;
        
        int p=0,m=s+1;
        
        vector<string> ans;
        
        while(m<=e){
            vector<char> v(2);
            if(nums[m]==nums[p]+1){
                p++;
                m++;
            }
            else{
                if(s==p){
                    ans.push_back(to_string(nums[s]));
                }
                else{
                    string temp = to_string(nums[s])+"->"+to_string(nums[p]);
                    ans.push_back(temp);
                }
                s=m;
                p=s;
                m++;
            }
        }
        while(p<e){
            p++;
        }
        if(s==p) ans.push_back(to_string(nums[s]));
        else {
            string temp = to_string(nums[s])+"->"+to_string(nums[p]);
            ans.push_back(temp);
        }
        return ans;
    }
};