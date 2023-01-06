//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    int shortestPath(int num1,int num2)
    {   
        vector<int>prime(10000,1);
        prime[1]=0;
        for(int i=2;i*i<=9999;i++){
            if(prime[i]){
                for(int j=i*i;j<=9999;j+=i)
                    prime[j]=0;
            }
        }
        vector<int>vis(10000,-1);
        queue<int>q;
        q.push(num1);
        vis[num1]=0;
        while(!q.empty()){
         int t=q.front();
         q.pop();
         string s=to_string(t);
             for(int i=0;i<s.length();i++){
             char ch=s[i];
                 for(int j=(i==0?1:0);j<=9;j++){
                     s[i]=j+'0';
                     if(prime[stoi(s)] && vis[stoi(s)]==-1){
                     vis[stoi(s)]=1+vis[t];
                     q.push(stoi(s));
                     }
                 }
             s[i]=ch;
             }
        }
        return vis[num2];
    }
};


//{ Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    Solution obj;
    while(t--)
    {
        int Num1,Num2;
        cin>>Num1>>Num2;
        int answer=obj.shortestPath(Num1,Num2);
        cout<<answer<<endl;
    }
}
// } Driver Code Ends