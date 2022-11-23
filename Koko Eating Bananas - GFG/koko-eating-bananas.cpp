//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            int t= functime(mid,piles);
            if(t<=H){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
            
        }
        return ans;
        
    }
    int functime(int mid,vector<int>&piles){
        int sum=0;
        for(int i=0;i<piles.size();i++){
            sum+=(piles[i]/mid)+((piles[i]%mid)!=0);
        }
        return sum;
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
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends