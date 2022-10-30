//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    
	   // sort(arr,arr+n);
	   // return arr[n-2];
	   //int max=-1;
	   //int id=0;
	   //for(int i=0;i<n;i++){
	   //    if(arr[i]>max){
	   //        max=arr[i];
	   //        id=i;
	   //    }
	   //}
	   //arr[id]=0;
	   //int m=0;
	   //for(int i=0;i<n;i++){
	   //    if(arr[i]>m){
	   //        m=arr[i];
	   //    }
	   //}
	   //return m;
	   sort(arr,arr+n);

        
        for(int i = n-1; i>=0;i--){
            int mx = arr[n-1];
            if(arr[i] != mx)return arr[i];
        }
        return -1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends