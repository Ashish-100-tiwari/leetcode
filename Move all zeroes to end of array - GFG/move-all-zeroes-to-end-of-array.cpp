//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int low=0,high=1;
	    while(high<n){
	       if(arr[low]==0&&arr[high]!=0){
	           swap(arr[low],arr[high]);
	           low++;high++;
	       }else if(arr[low]!=0&&arr[high]!=0){
	           low++;high++;
	       }else if(arr[low]==0&&arr[high]==0){
	           high++;
	       }else if(arr[low]!=0&&arr[high]==0){
	           low++;high++;
	       }
	    }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends