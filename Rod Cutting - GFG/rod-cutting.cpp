// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

int dp[1001][1001];
class Solution{
  public:
    
    Solution(){
        memset(dp,-1,sizeof(dp));
    }
    
    int knapSack(int length[],int prices[],int N,int W){
        
        if(N==0 or W==0) return 0;
        
        if(dp[N][W]!=-1) return dp[N][W];
        
        if(length[N-1]<=W){
            return dp[N][W] = max(prices[N-1]+knapSack(length,prices,N,W-length[N-1]),knapSack(length,prices,N-1,W));
        }
        else return dp[N][W] = knapSack(length,prices,N-1,W);
    }
    
    int cutRod(int price[], int n) {
        //code here
        
        int arr[n];
        
        for(int i=0;i<n;i++){
            arr[i]=i+1;
        }
        
        return knapSack(arr,price,n,n);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends