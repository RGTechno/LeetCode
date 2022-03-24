class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(),people.end());
        
        int n = people.size();
        
        int s=0,e=n-1;
        
        int ans = 0;
        
        while(s<e){
            if((people[s]+people[e])>limit){
                ans++;
                e--;
            }
            else{
                ans++;
                s++;
                e--;
            }
        }
        
        if(s==e) ans++;
        
        return ans;
        
    }
};