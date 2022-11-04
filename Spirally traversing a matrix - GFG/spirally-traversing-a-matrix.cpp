//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // int row_start=0,row_end=r-1,col_start=0,col_end=c-1;
        vector<int>ans;
        // while( row_start<=row_end && col_start<=col_end ){
            
        //     //row print
        //     for(int col=col_start;col<=col_end;col++){
        //         ans.push_back(matrix[row_start][col]);
        //     }
        //     row_start++;
            
        //     for(int row=row_start;row<=row_end;row++){
        //         ans.push_back(matrix[row][col_end]);
        //     }
        //     col_end--;
            
        //     for(int col=col_end;col>=col_start;col--){
        //         ans.push_back(matrix[row_end][col]);
        //     }
        //     row_end--;
            
        //     for(int row=row_end;row>=row_start;row--){
        //         ans.push_back(matrix[row][col_start]);
        //     }
        //     col_start++;
            
        // }
        // return ans;
        int top=0,left=0,right=c-1,bottom=r-1;
        while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++)
          ans.push_back(matrix[top][i]);
    
        top++;
    
        for (int i = top; i <= bottom; i++)
          ans.push_back(matrix[i][right]);
    
        right--;
    
        if (top <= bottom) {
          for (int i = right; i >= left; i--)
            ans.push_back(matrix[bottom][i]);
    
          bottom--;
        }
    
        if (left <= right) {
          for (int i = bottom; i >= top; i--)
            ans.push_back(matrix[i][left]);
    
          left++;
        }
      }
      return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends