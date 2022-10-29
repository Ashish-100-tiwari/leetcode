//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  float pow(int digit,int m){
      if(digit==0){
          return 0;
      }else{
          int d=1;
          for(int i=1;i<=m;i++){
              d*=digit;
          }
          return d;
      }
  }
    string armstrongNumber(int n){
        // code here
        int x=n;
        int a=0;
        while(n){
            int digit=n%10;
            n/=10;
            a+=pow(digit,3);
        }
        if(a==x){
            return "Yes";
        }else{
            return "No";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends