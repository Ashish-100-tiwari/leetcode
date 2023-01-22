//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int ninja(int n, vector < vector < int > > & points) {
  vector < int > prev(4, 0);
  prev[0] = max(points[0][1], points[0][2]);
  prev[1] = max(points[0][0], points[0][2]);
  prev[2] = max(points[0][0], points[0][1]);
  prev[3] = max(points[0][0], max(points[0][1], points[0][2]));
      for (int day = 1; day < n; day++) {
        vector < int > temp(4, 0);
        for (int last = 0; last < 4; last++) {
          temp[last] = 0;
          for (int task = 0; task <= 2; task++) {
            if (task != last) {
              temp[last] = max(temp[last], points[day][task] + prev[task]);
            }
          }
        }
        prev = temp;
      }
      return prev[3];
    }
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here
        return ninja(n,points);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends