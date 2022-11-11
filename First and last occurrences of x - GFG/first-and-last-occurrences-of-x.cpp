//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int first=lower_bound(arr,arr+n,x)-arr;
    int last=upper_bound(arr,arr+n,x)-arr;
    vector<int> v;
    
    if(arr[last-1]==x&&arr[first]==x){
       v.push_back(first);
       v.push_back(last-1); 
        
    }else{
         v.push_back(-1);
        v.push_back(-1);
    }
    return v;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends