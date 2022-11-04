//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int findLongestConseqSubseq(int arr[], int N)
    {
      set<int>hashset;
      for(int i =0;i<N;i++){
          hashset.insert(arr[i]);
      }
      int longstack=0;
      for(int i=0;i<N;i++){
          
          if(!hashset.count(arr[i]-1)){
              int current=arr[i];
              int currentstack=1;
              while(hashset.count(current+1)){
                  currentstack+=1;
                  current+=1;
              }
              longstack=max(longstack,currentstack);
          }
          
      }
      return longstack;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends