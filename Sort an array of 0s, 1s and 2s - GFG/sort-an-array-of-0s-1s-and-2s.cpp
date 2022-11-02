// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    
    void sort012(int a[], int n)
    {
        // sort(a,a+n);
        // // for(int i=0;i<n;i++){
        // //     cout<<a[i]<<" ";
        // // }
        int low=0,high=n-1,mid=0;
        while(mid<=high){
            switch(a[mid]){
            
            case 0:
                swap(a[mid],a[low]);
                // int temp=a[mid];
                // a[mid]=a[low];
                // a[low]=a[mid];
                mid++;
                low++;
                break;
                
            
            case 1:
                mid++;
                break;
            case 2:
                swap(a[mid],a[high]);
                // int temp=a[high];
                // a[high]=a[low];
                // a[low]=a[high];
                // // mid++;
                high--;
                break;
            
            }
        }
        // return a;
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends