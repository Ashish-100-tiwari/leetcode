//{ Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution
{
    public:
    int count(int m,int n,vector<vector<int>> dp){
        for(int i=0; i<m ;i++){
              for(int j=0; j<n; j++){
                  
                  //base condition
                  if(i==0 && j==0){
                      dp[i][j]=1;
                      continue;
                  }
                  
                  int up=0;
                  int left = 0;
                  
                  if(i>0) 
                    up = dp[i-1][j];
                  if(j>0)
                    left = dp[i][j-1];
                    
                  dp[i][j] = up+left;
              }
          }
  
        return dp[m-1][n-1];
    }
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        vector<vector<int>> dp(a,vector<int>(b,-1));
        return count(a,b,dp);
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}


// } Driver Code Ends