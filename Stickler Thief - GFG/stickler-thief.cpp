//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    int rob(int temp[],int n){
       
        int prev =temp[0];
        int prev2= temp[0];
        
            for(int i=1; i<n; i++){
             int pick = temp[i];
            if(i>1)
                pick += prev2;
            int nonPick = 0 + prev;
            
            int cur_i = max(pick, nonPick);
            prev2 = prev;
            prev= cur_i;
            }
            
        return prev;
    }
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        
        int m=rob(arr,n);
        return m;
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
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends