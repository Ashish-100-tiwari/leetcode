//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    vector<vector<int>> fourSum(vector<int> &arr, int k)
    {   vector<vector<int>> res;
        if(arr.empty()){
            return res;
        }
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            int target_3=k-arr[i];
            for(int j=i+1;j<n;j++){
                int target_2=target_3-arr[j];
                int front = j + 1;
                int back = n - 1;
                while(front<back){
                    int two_sum=arr[front]+arr[back];
                    if(two_sum<target_2){
                        front++;
                    }else if(two_sum>target_2){
                        back--;
                    }else{
                        vector<int> quadruplet(4, 0);
                        quadruplet[0] = arr[i];
                        quadruplet[1] = arr[j];
                        quadruplet[2] = arr[front];
                        quadruplet[3] = arr[back];
                        res.push_back(quadruplet);
                        
                        // Processing the duplicates of number 3
                        while (front < back && arr[front] == quadruplet[2]) ++front;
                    
                        // Processing the duplicates of number 4
                        while (front < back && arr[back] == quadruplet[3]) --back;
                    }
                }
                // Processing the duplicates of number 2
                while(j + 1 < n && arr[j + 1] ==arr[j]) ++j;
            }
            // Processing the duplicates of number 1
            while (i + 1 < n && arr[i + 1] == arr[i]) ++i;
        }
        return res;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends