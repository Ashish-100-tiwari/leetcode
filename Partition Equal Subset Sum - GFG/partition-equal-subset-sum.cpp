//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int n, int arr[])
    {
        int totSum=0;
    
        for(int i=0; i<n;i++){
            totSum+= arr[i];
        }
        
        if (totSum%2==1) return false;
        
        else{
            int k = totSum/2;
            vector<bool> prev(k+1,false);
        
            prev[0] = true;
            
            if(arr[0]<=k)
                prev[arr[0]] = true;
            
            for(int ind = 1; ind<n; ind++){
                vector<bool> cur(k+1,false);
                cur[0] = true;
                for(int target= 1; target<=k; target++){
                    bool notTaken = prev[target];
            
                    bool taken = false;
                        if(arr[ind]<=target)
                            taken = prev[target-arr[ind]];
                
                    cur[target]= notTaken||taken;
                }
                prev = cur;
            }
        
        return prev[k];
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends