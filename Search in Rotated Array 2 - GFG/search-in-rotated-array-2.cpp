//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int N, vector<int>& A, int Key) {
        // Code here
        int h=N-1,l=0;
        while(l<=h){
            int mid=(l+h)/2;
            if(A[mid]==Key){
                return 1;
            }
            if(A[l]<=A[mid]){
                if(Key>=A[l]&&Key<=A[mid]){
                    h=mid-1;
                }else{
                    l=mid+1;
                }
                
            }else {
                if(Key>=A[mid]&&Key<=A[h]){
                    l=mid+1;
                }else{
                    h=mid-1;
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends