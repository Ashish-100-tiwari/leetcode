//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        int mini = min(A, B), 
            maxi = max(A, B), 
            moves = 0;
        while (!(maxi <= max(C, D))) {
            maxi = maxi/2;
            if (maxi < mini) {
                swap(maxi, mini);
            }
            moves++;
        }
        while (!(mini <= min(C,D))) {
            mini = mini/2;
            moves++;
        }
        return moves;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends