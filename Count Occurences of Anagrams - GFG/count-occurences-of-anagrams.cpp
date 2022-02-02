// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string p, string s) {
	    // code here
	    map<char,int> mp;
        
        for(auto i:p){
            mp[i]++;
        }
        
        int n = s.size();
        
        int k = p.size();
        
        int st=0,e=0;
        
        vector<int> ans;
        
        while(e<n){
            if(mp[s[e]]>0){
                mp[s[e]]--;                
                e++;
                
                if(e-st==k){
                    ans.push_back(st);
                }                
            }
            
            else if(st==e){
                st++;
                e++;
            }
            
            else{
                mp[s[st]]++;
                st++;
            }
        }
        
        return ans.size();
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends